from setuptools import find_packages
from setuptools import setup

setup(
    name='custom_interfaces_anscer',
    version='0.0.0',
    packages=find_packages(
        include=('custom_interfaces_anscer', 'custom_interfaces_anscer.*')),
)
