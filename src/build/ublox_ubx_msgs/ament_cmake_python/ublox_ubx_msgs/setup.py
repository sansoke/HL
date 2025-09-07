from setuptools import find_packages
from setuptools import setup

setup(
    name='ublox_ubx_msgs',
    version='0.6.1',
    packages=find_packages(
        include=('ublox_ubx_msgs', 'ublox_ubx_msgs.*')),
)
