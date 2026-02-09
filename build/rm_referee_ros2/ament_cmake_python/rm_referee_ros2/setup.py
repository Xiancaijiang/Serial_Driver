from setuptools import find_packages
from setuptools import setup

setup(
    name='rm_referee_ros2',
    version='0.1.0',
    packages=find_packages(
        include=('rm_referee_ros2', 'rm_referee_ros2.*')),
)
