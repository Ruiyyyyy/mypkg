from setuptools import setup
import os
from glob import glob

package_name = 'mypkg'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        # ↓ Launchファイルをインストールするために必須の行
        (os.path.join('share', package_name, 'launch'), glob('launch/*.launch.py')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Ruiyyyyyy',
    maintainer_email='s24c1081ef@s.chibakoudai.jp',
    description='ロボシス講義用',
    license='BSD-3-Clause',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            # ↓ コマンドとPythonファイルの対応付け
            'talker = mypkg.talker:main',
            'listener = mypkg.listener:main',
        ],
    },
)
