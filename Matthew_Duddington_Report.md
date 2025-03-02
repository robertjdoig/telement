# Introduction to Programming 2016 - Assignment 2  
# Matthew Duddington

[![Telement YouTube video link](https://img.youtube.com/vi/TAAxgB051rc/0.jpg)](https://www.youtube.com/watch?v=TAAxgB051rc)

Project video: www.youtube.com/watch?v=TAAxgB051rc

--------------------------------------------------------------------------------
## Team

**MA:**  
Eloise Calandre  
Pablo Larenas  
Max Ring  

**MSc:**  
Robert Doig  
Matthew Duddington  

![alt text](https://github.com/robertjdoig/telement/blob/master/blueprint_screenshots/Team_format.png "Team roles")  

--------------------------------------------------------------------------------
## Aims
### Group

- Design a simple prototype slice of gameplay:  
  - Demonstrates the use of a 'dungeon' tileset based level design.  
  - Contains interactive gameplay elements.  

- Work on a collaborative basis, communicating across MSc and MA disciplines:
  - Programmers to 'enable' and support the artists with custom components.
  - Distributed ownership between team members over implementations of larger tasks.  
  - Resolution of design ambition with production and technical feasibility.  
  - Basic use of framework methods such as 'Task Lists' and 'Sprints' to achieve a set of minimum viable features.  

- Utilise source control in a multi-collaborator environment.  

### Individual

- Understand how to use Unreal Blueprints and become familiar with a core set of standard behaviours / approaches.  
- Develop a functional prototype game product, whilst working as part of a small team and 'programming pair'.  
- Increase my understanding of level design principles from a technical standpoint.  


--------------------------------------------------------------------------------
## Design Overview
### Deciding on the Game Format - 'Telement'

Early design discussions attempted to form ideas that would steer away from the cliche game 'dungeon' format. Instead, we wanted to try simply keeping the essence of *"Rooms and Spaces interconnected by Passages that utilise an arrangement of common architectural and game-mechanic components"*.  

We established an ambitious initial concept of *"a dream-space at the point of collapse of an old universe and re-birth of a new one"* in which the player would *"manipulate elements"* to solve puzzles and learn about the game's world. Many features of this design, however, we quickly established would be too complex to implement satisfactorily within the time available and with the lack of prior experience of the team with Unreal and its visual Blueprint system. Through the process of distilling and simplifying the idea, we eventually arrived at a more traditional 'temple puzzler' format whilst maintaining the mechanic focus of element based puzzles.  

This direction also enabled the group to easily define initial divisions of labour, as each artist was able to be assigned an element to focus on while simultaneously working within an agreed set of *common constraints that suited both technical and design needs*. Similarly, the component style 'traps' would provide an obvious platform for the programmers to create a game-mechanic toolkit which could be used by the artists to develop a variety of challenges from the same limited kit.  

The project is thus building a *"Temple of Elements"*, hence the so-called working title of *'Telement'*.  


### General Mechanics

- Manipulate elements to solve physics, sequence and resource management based puzzles.  
- Elements (Air, Fire and Water in this prototype) can be Absorbed (Subtract) or Emitted (Add), by way of the point and trigger interface.  
- Elements must be stored in the limited supply of crystals found around the levels, and each charge of an element breaks the crystal after use. (so long as the emission reacted with a valid object, otherwise the energy boomerangs back to the player)  
- Air pushes or pulls objects (such as the floating platforms in the prototype).
- Fire lights and extinguishes objects (such as torches and braziers) as well as destroying breakable objects which form barriers or contain resource items such as health or generic crystals.  
- Water raises and lowers the height of pools around the level, upon which platforms float. There are also water spawners which create 'slippery' puddles that enable to player to run very fast for a short period of time - enabling them to launch over wide gaps or bypass fast moving obstacles. 

--------------------------------------------------------------------------------
## Production Overview

### Communication
The team aimed to simulate, as far as practical, a working example of a industry style, small-team production approach. We held extensive design and planning meetings throughout early stages of the project (see sample whiteboard photos below) and then followed up on these with a mixture of in-studio working days and remote conference calls / screen share, programming and design sessions via Google Hangouts (hangouts.google.com).

*White board designs Nov 2016*  
![alt text](https://github.com/robertjdoig/telement/blob/master/blueprint_screenshots/whiteboards/2016_11_11_B.jpg "White board designs Nov 2016")
![alt text](https://github.com/robertjdoig/telement/blob/master/blueprint_screenshots/whiteboards/2016_11_16_A.jpg "White board designs Nov 2016")
![alt text](https://github.com/robertjdoig/telement/blob/master/blueprint_screenshots/whiteboards/2016_11_16_B.jpg "White board designs Nov 2016")  
  
*Sprint task identification Dec 2016*  
![alt text](https://github.com/robertjdoig/telement/blob/master/blueprint_screenshots/whiteboards/2016_12_02_A.jpg "Sprint task identification Dec 2016")  
  
*Scheduling remaining project task types over Winter holidays Dec 2016*  
![alt text](https://github.com/robertjdoig/telement/blob/master/blueprint_screenshots/whiteboards/2016_12_14_A.jpg "Scheduling remaining project task types over Winter holidays Dec 2016")  
  
*Design technical amendments and game-mechanic refinements Jan 2017*   
![alt text](https://github.com/robertjdoig/telement/blob/master/blueprint_screenshots/whiteboards/2017_01_04_A.jpg "Design technical amendments and game-mechanic refinements Jan 2017")  
  
*Remaining tasks / bug fixes Jan 2017*  
![alt text](https://github.com/robertjdoig/telement/blob/master/blueprint_screenshots/whiteboards/2017_01_09_B.jpg "Remaining tasks / bug fixes Jan 2017")
![alt text](https://github.com/robertjdoig/telement/blob/master/blueprint_screenshots/whiteboards/2017_01_10_A.jpg "Remaining tasks / bug fixes Jan 2017")  

To keep track of core tasks progress we used digital post-it-notes via Trello (trello.com). This was extremely useful in helping us keep track of each others progress over the weeks when different members of the team were unable to be in the university lab space at the same time.  

Robert and I also used this to flag or 'check out' certain Blueprints (such as the First Person Character) that were tied into multiple tasks. We needed to develop this system as using Unreal with GitHub involved committing binary files, rather than easily mergeable ascii text, and so we had to be very careful to  avoid overwriting each other's work.  

Trello also empowered the artists to leave simple bug reports and see them being picked up by Robert and myself when we tagged it with our name and moved it to an in progress column. It also provided a simple per-issue discussion thread for followup questions etc.  

*Trello shared task list and progress board*  
![alt text](https://github.com/robertjdoig/telement/blob/master/blueprint_screenshots/trello_task_board.JPG "Trello shared task list and progress board")

### My Role

As someone with a background in design, we found that I was well suited to filling a kind of hybrid role in the team. I worked extensively with both Robert and Pablo to solve different sides of related tasks.

Robert and I worked in a highly collaborative pattern, initially we had several sessions where we worked simultaneously on more complex blueprints - this was crucial to our unpicking and self-learning of the Unreal Blueprint system. We were often able to 'fill in the blanks' for areas we had independently discovered while experimenting on our own smaller tasks. During later stages we would often consult or 'Rubber Duck' for each other while jointly working in the university lab. Many of the Blueprints have traces of each of us establishing, augmenting or debugging functionality.

In several cases, Robert and I would also be assisting Pablo to understand how to amend of finish a particular Blueprint he was constructing. I also spent time breaking down the construction of Blueprints and using timeline nodes with Max. Through this process he was able to learn how to construct the triggerable bridge pieces that self assemble and to sequence the lighting of various torches.

My work with Pablo initially was focused on high level design. Feasibility and project planning were consistently part of our thought cycle and so there was significant interplay of our pool of design and technical knowledge. Later in the project I would collaborate with Pablo on the level design, often mocking up a quick build of a Blueprint feature so that we could test out an idea on the fly.

--------------------------------------------------------------------------------
## Technical Overview

As mentioned earlier, the Blueprint system was new to all of the members of the team. Consequently, we quickly recognised that the most prudent approach was to control the scope of our project. Our target was something that we would both be able to achieve but also feel confident that we would be able to polish to a reasonable level of presentational quality. The intention was that this should become a valuable piece for our portfolio.

The visual programming system used within Unreal brought with it a number of notable benefits and problems:

***Pros***  
- Easy for the artists to pick up in comparison to the abstract and syntax barrier of code.  
- Sometimes seeing all the possible output variables as open pins revealed options I had not necessarily considered.  
- Nice to be able to program spatially in both vertically and horizontally.
- Seeing wires light up during debugging is helpful to give a sense of the call stack much more visually.  

***Cons***  

- Needing to learn how Unreal Blueprints 'think' and how the designers planned for the framework to be used.  
  - Not always in the way that seemed intuitive.  
  - Some strange names such as Branch for an If statement.  
  - The settings for a node or variable are often hidden in side menus or non obvious sub windows - so a challenge for the programmers to locate when they know it 'should be here somewhere', becomes an oblivious option to the artists.  

- Most variables are public by default making un-encapsulated code attractive in the moment (particularly as encapsulated Blueprints are considerably harder to write)  
  - Clunkyness preventing easy encapsulation leads to artists making duplicate Blueprints for minor changes in Blueprint behaviour. As each Blueprint is essentially it's own class, this leads to many many headaches when checking types, changing shared functions, defining  variables of a specific class instance etc.  

- Just getting a thing working at the start left us with a legacy of early Blueprints that were substandard. We refactored important ones as and when we had time, but there are still some remaining.  
  - The next 'cycle' if this were a long term development would definitely be a 'tock' stability focus, otherwise we would drown in 'patchwork fixes'.  

- While using fewer instances of the same variable node in a graph feels more intuitively correct, actually in practice it just leaves you with snaking wires. Thus, it ends up preferable to replace these with multiple 'gets' to feed equivalent inputs - however, this leaves more visual 'unit' clutter on the graph. A Blueprint programmer has to decide which is the lesser of two evils, more nodes or more wire spaghetti. On the whole we found it was easier for someone else to read the code with repeated nodes but easier to modify without leaving overlooked variable instances with the single variables wired to multiple locations.  

## Blueprint Descriptions

Within this section I will display a selection of the most important Blueprints that I worked on and a brief summery of their function.
 
### Triggerable objects / Triggers
The triggerable object class was one of the most interesting, functional and essential to our collaboration with the MA students on our team, of all my blueprint work.

The base class has only one function header the 'Triggerable Event'. But by inheriting this function the class abstracted each triggerable object's behaviour into a single common call that could be made by any corresponding trigger. i.e. A lever trigger, does not need to know what will happen when it calls the triggerable event on its array of triggerable objects, nor does it need to even know what type of triggerable object they are.

This trigger <-> triggerable pairing meant that the artists had a variety of objects to mix and match to form relatively sophisticated puzzles from the kit of objects at their disposal and required less programmer assistance to make functional each new gameplay puzzle idea. 

*A range of triggerable object Blueprints available to the artists*  
![alt text](https://github.com/robertjdoig/telement/blob/master/blueprint_screenshots/Matthew/Triggerable%20event.PNG "Triggerable event")
![alt text](https://github.com/robertjdoig/telement/blob/master/blueprint_screenshots/Matthew/Triggerable%20objects.PNG "A range of triggerable object Blueprints available to the artists")  
  
  
***Lever*** *(Trigger)*  
Originally a simple blueprint created by Pablo that I assisted with bug fixing for a specific use case (see early example image below).

*Early example of the lever class*  
![alt text](https://github.com/robertjdoig/telement/blob/master/blueprint_screenshots/Matthew/Early%20lever.PNG "Early example of the lever class")
*Lever class after refactoring and additional functionality*  
![alt text](https://github.com/robertjdoig/telement/blob/master/blueprint_screenshots/Matthew/Lever.png "Lever class after refactoring and additional functionality")
  
  
***Lightable torch / brazier*** *(Trigger & Triggerable)*  
Working as both a trigger and a triggerable object, the torch can loop through the trigger functions of the objects in either of the two arrays attached to it - one for being lit and one for being extinguished. These arrays are exposed to the artists via the in-editor inspector panel and can be filled from a simple drop down which displays all valid object instances in the scene.

The torch can also be remotely lit / extinguished with the option to ignore array processing if the designer choses to do so. It can also be set to an initial lit or unlit state, which it switches to as the game loads - this enables puzzles to be setup in specific combinations.  

*Triggerable trigger torch and editor exposed array variables for artists*  
![alt text](https://github.com/robertjdoig/telement/blob/master/blueprint_screenshots/Matthew/Triggerable%20trigger%20torch%20vars.PNG "Triggerable trigger torch")
![alt text](https://github.com/robertjdoig/telement/blob/master/blueprint_screenshots/Matthew/Triggerable%20trigger%20torch.PNG "Triggerable trigger torch")  


***Rising floor / door*** *(Triggerable)*  
*Triggerable door Blueprint*  
![alt text](https://github.com/robertjdoig/telement/blob/master/blueprint_screenshots/Matthew/Triggerable%20door.PNG "Triggerable door Blueprint")  

### Customised events for the Tutorial Room ###
Within the tutorial room space, multiple storytelling features that were unique to this space were required, in order to demonstrate a few core game behaviours to the player. The glove (Triggerable EDIT [Element Device for Inducing Transference]) found at the centre of the room acted as the holder for these custom events.

The room is intended to communicate the link between elements being stored and released from crystals held by the glove; the use of levers; torch lighting and that these can trigger features such as doors and rising floors; the presence of traps; destruction of stone pots; and have the initial quests from the temple spirits voice.

*Storytelling custom Blueprint for tutorial room*  
![alt text](https://github.com/robertjdoig/telement/blob/master/blueprint_screenshots/Matthew/Triggerable%20EDIT.PNG "Storytelling custom Blueprint for tutorial room")

### First Person Character
Robert initially modified the standard first person controller from the Unreal starter pack, maintaining basic movement and camera control. Following this we regularly worked in tandem on various functions, this became our most complex Blueprint with a variety of functions growing within it. I will describe the most interesting examples for which I had significant responsibility:  

**Add / subtract element system**  
This section of the Blueprint underwent significant revisions and additions over the course of the project. Evolving alongside the iteration of requirements for our players interactions and elemental capabilities.  

*Early version of the element IO system*  
![alt text](https://github.com/robertjdoig/telement/blob/master/blueprint_screenshots/player_blueprints/element_IO_earlier_version.png "Early version of the element IO system")  

*Final version of the element IO system*  
![alt text](https://github.com/robertjdoig/telement/blob/master/blueprint_screenshots/player_blueprints/element_IO_final_version.PNG "Final version of element IO system")  

***Add Element***  
>- Takes input from the LMB.  
- Checks for the cooldown having ended.  
- Uses Robert's projectile position function to calculate the spawn offset.  
- Determines the element type that the player has active.  
- Checks that the player has at least one filled crystals to use the power.  
- Examines what the raycaster has hit and whether it is tagged to react with that element.  
- Spawns the element.  
  - For *Air* it creates a collisionless visual and calls the floating platform movement code which checks the position of the block in a column and, if there is space to move, runs a timeline based animation to change its position.  
  - For *Fire* and *Water* a physical projectile is propelled forwards and reports back on whether it has his a valid Fire/Water tagged object. (Water has a grace of three bounces in order to make avoiding the platforms easier)  
- Removes a crystal of that element type from the player's stock.  
- Plays the relevant element sound.  
- Finally a short cooldown is set to prevent accidental spamming of the power.  

***Subtract element***  
>- Takes input from RMB.
- Checks for the cooldown having ended.  
- Uses Robert's projectile position function to calculate the spawn offset.
- Examines what the raycaster has hit and what element it is tagged to react with.  
- If not already active, the active element type is automatically switched (an important user centric behaviour).
- Checks that the player has at least one empty generic crystal and removes it.
- Removes a generic crystal from the player's stock.
- Calls the individualised element reactions either by applying a typed amount of token damage or with a specific function.
- Spawns the visible and audio components of the effect.
- Adds a new crystal to the player's stock of the relevant type.
- Finally a short cooldown is set to prevent accidental spamming of the power. 

In the case of both the Add and Subtract, with further development of the project, several of the shared behaviours on each element's path could be wrapped up into separate function graphs to avoid aspects of duplication (such as the crystal array incrementing and decrementing). However, during development it was important to keep each of the three tracks independent as the order of different nodes was interrupted or adjusted for the particular requirements of each effect.  

**Aimed object detection**  
Raycast function checks for collision with specifically tagged objects, informing the UI class of points of interest to display to the player informational graphics.  

*Raycast based checking and resolution*  
![alt text](https://github.com/robertjdoig/telement/blob/master/blueprint_screenshots/Matthew/Raycast%20check%20function.PNG "Raycast checking and resolution")

### Moving Trap Wall
This was another Blueprint that Pablo initially setup with a basic timeline node. I firstly adapted the system to allow for variable speed and independent positioning within the world. Later this was transformed into a triggerable Blueprint to work with the torch and lever puzzle.  

*Moving trap wall*  
![alt text](https://github.com/robertjdoig/telement/blob/master/blueprint_screenshots/Matthew/Moving%20walls.PNG "Moving trap wall")

### Floating Air Block
Platforms which are constrained to move along a single axis. They react to Air I/O element effects, with a timeline lerp interval movement applied forwards or backwards. The movement has a maximum and minimum position value which is editable by the artists via the inspector.  

*Air element push and pull floating block*  
![alt text](https://github.com/robertjdoig/telement/blob/master/blueprint_screenshots/Matthew/Floating%20air%20block.PNG "Air element push and pull floating block")

### Wall spawners
Refactoring Robert's timer functionality from an overlapping call every frame to a delay timer co-routine style timed behaviour.  

*Original spawner timer*  
![alt text](https://github.com/robertjdoig/telement/blob/master/blueprint_screenshots/Matthew/Original%20spawner%20timer.PNG "Original spawner timer")
*Refactored spawner timer*  
![alt text](https://github.com/robertjdoig/telement/blob/master/blueprint_screenshots/Matthew/Refactor%20spawn%20timer.PNG "Refactored spawner timer")

### Water block
A translucent cuboid which ignores collisions with the player but produces a physical force upon the 'floating blocks' Blueprint. When it detects a 'hit' collision from the water element projectile the scale of the block increased over a period of time using a timeline node to animate the transformation over a number of frames. The reverse behaviour is performed with a successful raycast during a water subtract attempt by the player.  

The image below shows the set of nodes which enable water to be added. This Blueprint originally made use of tics and a boolean check in order to drive the gradual change of scale, however, this was refactored to use the timeline node which made the transformation much more stable and predictable.  

*Water block add water section of Blueprint*  
![alt text](https://github.com/robertjdoig/telement/blob/master/blueprint_screenshots/Matthew/Water%20IO%20Add.PNG "Water block Add water section of Blueprint")

### Teleporter
This is a two part object with the main teleporter object referencing a separately movable destination pad which the artists could position anywhere in the world. This Blueprint was not used in the final game, however, I repurposed the node structure to create the teleporting effect of picking up the quest keystones. This revised Blueprint also separated the destination into its own object which had a directional aspect to specify the direction the player should face after teleporting.  

![alt text](https://github.com/robertjdoig/telement/blob/master/blueprint_screenshots/Matthew/Teleporter.PNG "Teleporter Blueprint")
