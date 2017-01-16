TELEMENT - GROUP PROJECT

The brief for this game was to create a game set in a dungeon with a team of 3 Artists and 2 Programmers. We used Github to collaborate 
as a team and we used Unreal Engine to build the game.

The concept of our game is based on the manipluation of elements - either expelling or absorbing. Our three elements are Water, Fire and
Air. Each have their own unique properties (obviously), with air allowing certain objects in the level to be moved around, fire allowing 
the user to light or extinguish flames, and finally water allowing the user to raise of lower water sources. 

MY OWN PERSONAL CONTRIBUTION:

I was involved at the beginning and at the end of the project, as will be explained shortly.

At the beginning of the project, I was involved with the team developing the concept for our game where we were spitballing ideas and
discussing the merits and issues of any and all ideas. 

Following this, as an artist I was involved with the 3D modelling of assets to enter the game, developing my own layout for the 'Fire'
level and modelling other elements that were required by the team.

In terms of blueprinting, I created a new game in Unreal and created a First Person Charactor Actor which had the standard W,A,S,D 
control system. I also implemented a jump and sprint mechanic using blueprints, however I did not commit any of these creations as it 
was prior to the Github repository being set up. 

Towards the end of the project I was involved in the development of some Blueprints with the assistance of the team. With particular help
from Matthew, I constructed and edited a Blueprint which scripted the following:

  At the entry to the Tutorial Room I created a Box Collision which in term signalled the Stone Door in front of the player to open. The
  door took 4 seconds to open at which time the player could enter the room. At this point, after 4.5 seconds delay, the 9 torches on the
  walls of the room lit at the same time.
  
Following this I then used the same script to develop the following effect:

  After the player completes the Tutorial room they then head up the stairs to the main chamber. This is where my second script takes
  place. As with the previous blueprint, I used a Box Collision to signal the 6 braziers around the central lift to light. They light in
  sets of 2 with each set lighting 1 second after the previous.
  
The third blueprint I created uses several elements of already constructed blueprints to create a new one. It runs as follows:

  The player can exit the main chamber through 2 different routes, one of which is a staircase leading upwards towards a bridge which
  connects part of the level to the main chamber. As the player reaches the top, there is no bridge in sight. To the right of the player
  I placed a lever, and then connected this to the bridge which was at that point below the sight line of the player. Once the lever is
  pulled, the bridge begins to form in front of the player, with each bridge piece (sets of 2 assets) rising 1 second after the previous.
  Once this happens, a box collision (which can only be triggered once on the bridge) is triggered and the torches on the bridge
  sides (6 of them) light.
  
As stated previously, I was only involved in this project at the beginning and at the end of the project. This is due to the family
reasons that I informed all lecturers and the head of department about in the first term. Everybody is different when it comes to 
dealing with grief, and I was uncooperative and uninterested in everything during this difficult end to the year.

As I said, I have been difficult to work with, but my team of Pablo, Eloise, Matthew and Rob have been paitent and understanding with
my situation at home. I would like to ask that they recieve extra consideration for their work due to how difficult I have been to work
with.
