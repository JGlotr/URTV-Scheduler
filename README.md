# URTV-Scheduler
A scheduler for the University of Rochester Television Station (WIP)

This program is very much a work in progress.  It probably won't even compile without a couple of changes here and there.  
GTK4 is... something, that's for sure.  
As you can see, there is a *lot* of stuff to do still, and this program is very much in it's early days.  I know we have a bunch of CS majors here at URTV, so if any of Y'all want to have fun figuring out GTK with me, let us have fun!  : )


In order to get images to work, currently, you have to manually change the directory of each image in the source code. 
(This will be fixed later on in release).  
Furthermore, default file folders would need to be fixed if this were to be transfered to a different computer. 

This program was designed in order to create a file (Or edit a pre-existing one) that would define the schedule for URTV, channel 3.2 at the University of Rochester.  It is going to, eventually, provide the ability to create a weekly scheduled system, providing additional features along the way.  

Currently, a fair bit of the basic framework has been built.  (This includes a main selection screen, and some of the additional screens). 
A file menu is included in this basic framework, though the features it provides are currently being worked on (More specifically, the way to choose a specific file).  The Victor tab works perfectly, as it should. 
Currently, I'm trying to figure out how to filter a GTK file chooser screen.  It isn't working though, so that might take a bit.  
Each day, when selected, will eventually have the ability to select between each individual hour, much like the main selection screen.  Each of these hours will have drag-and-drop functionality, which will allow the user to drag a file onto the screen to select order.  There will be a clear button at the bottom of the page for editing purposes.  (This *should* be easy, but we'll see).  Whenever a new file is added, the program should read the length of the files for the hour, and prompt the user with this information.  

Another program will be able to read this configuration file and play everything according to it, streaming it as needed.  

I use linux, so it is built for this platform.  Since it is written in C and GTK, it should be multi-platform, though a couple of things will need to be changed around in order to make it work.  

This will be edited on a fairly regular basis.  -JG
