from setuptools import find_packages
from setuptools import setup

setup(
    name='rm_serial_driver',
    version='0.1.0',
    packages=find_packages(
        include=('rm_serial_driver', 'rm_serial_driver.*')),
)
