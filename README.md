PhotoFlow
=========

The aim of the project is to implement a fully non-destructive photo retouching program that provides a complete workflow from RAW image development to high-quality printing.

Here is the general feature (whish)list:

- Fully non-destructive, layer-based photo editing workflow with realtime preview of the final image
- Support for 8-bits and 16-bits integer as well as 32-bits and 64-bits floating point precision, selectable at runtime and on a per-image basis
- Plugin-based architecture: most of the tools are implemented as separate modules that are loaded at runtime
- Tile-based image caching to limit the memory footprint and allow loading images of arbitrary size
- Fully color managed workflow: user-defined input, work and output profiles, soft-proofing, etc...
- Support for layer grouping and layer masks
- Support for common photo editing tools: levels, curves, brightness-contrast control, blurring, sharpening, cropping, resizing, colorspace conversions, etc..., all implemented in the form of image layers
- User-friendly interface to develop new tools and image filters as external plugins

# Downloading and compiling

The pixel rendering engine of PhotoFlow is based on VIPS (http://www.vips.ecs.soton.ac.uk). You have to install a recent version of VIPS in order to compile PhotoFlow.

Once VIPS is set up and running, follow these steps to download and compile PhotoFlow:

1. get master branch from GitHub:

        $ git clone https://github.com/aferrero2707/PhotoFlow.git

2. The build system is based on CMake, so you have to have it installed in your system.
   PhotoFlow provides an helper script to simplify the building process;
   in order to use it you have to go into the "build" subdirectory and run the "build.sh" script:

        $ cd PhotoFlow/build
        $ bash ./build.sh
   
   If you have installed VIPS in an unusual place, you can edit the build script and set the PKG_CONFIG_PATH variable accordingly

   To compile the code in debug mode, use
   
        $ bash ./build.sh debug
   
   instead.
   
3. If all goes well, you can now open an image file with PhotoFlow:

        $ ./src/photoflow image_file_name
        

# Current status

PhotoFlow is in a early development stage. The present code provides a proof-of-concept of the planned functionalities: it opens an image file and applies a brightness-contrast adjustment whose strength is controlled by a vertical linear gradient (no effect at the bottom and maximum at the top), followed by two "invert" operations.

The individual layers can be activated and de-activated using the radio buttons on the right of the image.

The program will hopefully evolve to a fully-functional preliminary version rather soon.

