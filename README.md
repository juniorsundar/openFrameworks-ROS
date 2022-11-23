# openFrameworks Project with ROS Compatibility

Build process is controlled using ```make``` build system.

The build processes are already automated in 'tasks.json' if you are using Microsoft Visual Studio Code.

Simply clone this directory into ```OF_ROOT/apps/myApps/```. You can delete the ```.git``` folder in the directory and initialise you own Git repository (push to remote server, etc.).

## Adding Libraries and ROS Packages

Check ```config.make``` and add the dependent libraries to:

- ```ros_libs``` (line 87)
- ```PROJECT_OPTIMIZATION_CFLAGS_DEBUG``` (line 142)
- ```PROJECT_OPTIMIZATION_CFLAGS_RELEASE``` (line 143)

## Adding ofx addons

Add new line to ```addons.make``` with ofx name.

## Adding reference to catkin workspace

In ```config.make```:

```bash
17 export LD_LIBRARY_PATH := $(LD_LIBRARY_PATH):/opt/ros/noetic/lib:/usr/lib:<path_to_ws>/devel/lib
18 export PKG_CONFIG_PATH := $(PKG_CONFIG_PATH):/opt/ros/noetic/lib/pkgconfig:/usr/lib/pkgconfig::<path_to_ws>/devel/lib/pkgconfig
```

**NOTE**: Compilation only works with bash. DO NOT USE WITH zsh.
