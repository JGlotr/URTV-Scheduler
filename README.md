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
Each day, when selected, now gives you the option of selecting one of 24 buttons (One for each hour in a day).  Selecting one of these buttons will (eventually) allow the user to edit the configuration file as to their desire.  The framework for this would be quite extensive in terms of putting it on every single button, so for testing purposes, only Sunday at 12AM is functional in this regard.  Once this is finished, it will be copied and changed as needed to support each option.  Edits to each hour will be made to a configuration file, eventually filling up an entire weeks worth of programming.  

This program uses a custom type of file for storing it's configurations.  It will be denoted by *.urtv, and the specifications for it will be uploaded here as soon as they are finalized.  

Another program will be able to read this configuration file and play everything according to it, streaming it as needed.  

I use linux, so it is built for this platform.  Since it is written in C and GTK, it should be multi-platform, though a couple of things will need to be changed around in order to make it work.  

This will be edited on a fairly regular basis.  -JG
