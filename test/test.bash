#!/bin/bash -xv
# SPDX-FileCopyrightText: 2025 Ryu Taniguchi
# SPDX-License-Identifier: BSD-3-Clause

ng () {
    echo ${1}行目が違うよ
    cat /tmp/mypkg.log
    res=1
}

res=0

source /opt/ros/humble/setup.bash

colcon build --packages-select mypkg || ng "$LINENO"
source install/setup.bash

timeout 15 ros2 launch mypkg talk_listen.launch.py > /tmp/mypkg.log 2>&1 || true

# ↓ ここを '通知:' から 'Listen:' に変更！
count=$(grep -c 'Listen:' /tmp/mypkg.log)

[ "$count" -ge 1 ] || ng "$LINENO"

[ "$res" = 0 ] && echo OK

exit $res
