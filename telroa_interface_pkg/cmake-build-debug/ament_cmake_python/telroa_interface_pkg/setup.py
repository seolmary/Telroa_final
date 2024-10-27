from setuptools import find_packages
from setuptools import setup

setup(
    name='telroa_interface_pkg',
    version='0.0.0',
    packages=find_packages(
        include=('telroa_interface_pkg', 'telroa_interface_pkg.*')),
)
