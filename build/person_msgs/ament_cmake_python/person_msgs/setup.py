from setuptools import find_packages
from setuptools import setup

setup(
    name='person_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('person_msgs', 'person_msgs.*')),
)
