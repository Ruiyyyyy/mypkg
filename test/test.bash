#!/bin/bash -xv
# SPDX-FileCopyrightText: 2025 Rui810
# SPDX-License-Identifier: BSD-3-Clause

ng () {
    echo ${1}行目が違うよ
    res=1
}

res=0

source /opt/ros/jazzy/setup.bash

colcon build --packages-select mypkg || ng "$LINENO"
source install/setup.bash

timeout 15 ros2 launch mypkg talk_listen.launch.py > /tmp/mypkg.log 2>&1 || true

count=$(grep -c '通知:' /tmp/mypkg.log)
[ "$count" -ge 1 ] || ng "$LINENO"

[ "$res" = 0 ] && echo OK

exit $res
