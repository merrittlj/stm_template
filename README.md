# *stm_template*

My own STM empty project template, is configured for STM32WBxx microcontrollers currently. Things you should change are commented with ``!CONFIGURE`` in the Makefile, but you should also make sure to include the right libraries and such in ``src/core``, and you have the right header files in ``src/core/misc``.

``src`` is used for all of the projects code and libraries. Libraries, external code, and ``common.h`` are all found in the ``src/include`` directory. Usually I just add libraries as submodules to this directory.

``build`` is generated from the Makefile, and stores the target file all of the object/dependency files in their respective structure.

``reference`` is used for datasheets, images, etc. Whatever is of use to you should go in here.
