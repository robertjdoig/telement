# Introduction to Programming 2016 - Assignment 2  
**Pablo Larenas**  
** GAME LINK IN YOUTUBE:** 


#OVERALL

The game concept is play with a character chosen by the temple’s spirits to protect the ancient ruins and its relics from a coming menace. In the game the player control that character from a First Person perspective.
In this prototype, the player can play a demo version in which he can explore an introductory temple level, experimenting the key mechanics, to test and, therefore, validate several design aspects of it, such as puzzles, obstacles, UI and art (lights, atmosphere and aesthetics).
In this version of the game we currently have water, fire and air. With each element, the player can either absorb or cast the element from a mystical glove gun, activating or deactivating several triggerable objects to solve the puzzles. 

#ACTIVITIES AS LEAD/TECHNICAL ARTIST

My role consisted in managing both aesthetical and design criteria for the game, being responsible of the look and feel of it, and constantly working next to Matthew and Robert in the blueprint specifications, application and edition among the project. 
In the first part I actively participated in the briefing process (game concept, scope and level design criteria definition) with the rest of the team, documenting all process and sketching several ideas for the game (traps, props, mechanics, etc) 
During the pre-production stage, I modelled the dungeon kit used to prototype the level and created initial Blueprints for it.  

In the production stage, I designed and modelled the final meshes for the game, and built the complete version of the temple level. In parallel, I supervised my artist colleagues work, giving them orientation to their respective activities (texture work and 3d modelling assistance).  

Additionally, I counted with the knowledge and assistance of Matthew to work in the redesign of many puzzles and aspect of the level design. Similarly, I worked with Robert designing and applying several sounds FX for the game.  

Through the process, I worked very close with Matthew and Robert, who helped me to resolve blueprints and logic issues, while I gave them design inputs to develop their BP as well. Similarly, as lead artist, I kept the project’s files in order and tracked progress of several check list of activities we made between several project’s phases.  

Finally, as part of my documentation activities, I worked with Matthew in the video and presentation production.

![alt text](blueprint_screenshots/Pablo/p_04.png)
*Whiteboard screenshots with initial trap and puzzle design made by the team*  
![alt text](blueprint_screenshots/Pablo/p_05.png)
*Trello board with tasks and ToDO lists. We used Trello to havve an online track of our activities*  
![alt text](blueprint_screenshots/Pablo/p_06.png)
*white box meshes used to design the first level rooms, hallways and obstacles*  
![alt text](blueprint_screenshots/Pablo/p_1.png)
*final view in editor mode from intro room, lava pit and water key room*  
![alt text](blueprint_screenshots/Pablo/p_02.png)
*final view in editor mode from two puzzle rooms: rolling balls and floating platforms* 
![alt text](blueprint_screenshots/Pablo/p_03.png)
*final view in editor mode from two puzzle rooms: collapisng walls and lever + spikes* 


#WORKING WITH BLUEPRINTS

During the preproduction stage I created basic BP, using matinee actors for animations and basic triggers. The main idea was prototype basic interactions that could be understandable and used by programmers as a baseline. 
All these blueprints were perfected by Matthew and Robert when the interaction and mechanic requirements became more complex.  

**BASIC LEVER**  

The lever included an overlapping triggerable interaction and an Input key to activate the movement. Depending of the lever status (Boolean) the timeline can play or reverse, enabling the player up and down. The lever was changed later by an automatic one to facilitate the gameplay.  

![alt text](blueprint_screenshots/Pablo/Lever_BP.png)
*Lever Blueprint*  

**BASIC ELEVATOR**  

Considering overlapping a collision box as main interaction. The elevator movement was initially mad as a matinee actor, but due its lack of precision and customization as a blueprint, I changed the movement to a timeline applying a vector value to the Z axis.  
  
![alt text](blueprint_screenshots/Pablo/Elevator_BP.png)
*basic lever Blueprint*  

**BASIC SPIKES AND MOVING WALLS**  

I designed a basic BP before having a damage system. Just the movement to test the size and shape of the assets. Due this initial blueprint I could realize about the scale of those assets and their effect in game, being able to change them in an early stage.  
  
  ![alt text](blueprint_screenshots/Pablo/Spikes_BP.png)
*Blueprint for movin spikes used in early stages of the project*    

**ROLLING BALL**  

I also applied a Rolling ball in the first level design, applying physics to a sphere primitive mesh. As an exercise, the rolling ball allowed me to test the scale of the hallways and, therefore, edit some parameters of the room meshes. 
In the final version of the prototype, we include rolling balls but using a different technique (time line with two axis). Although the balls don’t roll as physical objects, we could control their movement with the timeline.  

**UI DESIGN**  
Besides the graphic design aspects, the UI was also worked with bindings to the First Person Character Blueprint (FPCB). 
As the FPCB controls ammo, player movements and gun, I created several Booleans to activate or deactivate the graphic interface in the UI graphs. Using these simple bindings, I enabled a Quest Log with two quests which updates themselves separately, an indicator of the selected type of ammo, indicators when player switch element, damage frame effect (blood), and controls in the tutorial room. Additionally, I edited the previous progress bar (heath and stamina) made by Robert, applying graphic assets and editing some of their parameters. Similarly I edited the Damage of spikes and spawners in their respective blueprints to balance the game experience.  
  
  ![alt text](blueprint_screenshots/Pablo/UI_1.png)
*Bind graph which makes appear an image in the UI if the condition "is_wind" is true*  
  ![alt text](blueprint_screenshots/Pablo/UI_2.png)
*Editing the FPC BP adding the variables when player switch elements in the game*  
  ![alt text](blueprint_screenshots/Pablo/UI_3.png)
*Editing the FPC BP. these variables are added to activate the UI elements (quest log and controls description) when the player takes the gun after a dialogue.*
  ![alt text](blueprint_screenshots/Pablo/UI_4.png)
*UI Quest Log Bind graph which makes appear an image in the UI if the condition "is_log" is true* 
  ![alt text](blueprint_screenshots/Pablo/UI_5.png)
*Active Element UI Bind graph which changes the colour of the active type of element* 
  ![alt text](blueprint_screenshots/Pablo/UI_6.png)
*Example of UI elements graphic edition*   

**BASIC PLAYER CONTROLS**  

To set and iterate with the dungeon kit assets in Unreal, I created a First Person Character camera-based controls. This basic control were then replaced with a more complex BP.  
  
  ![alt text](blueprint_screenshots/Pablo/FPC_BP.png)
*Initial Player controls with WASD movements + jump button input*    

**MATERIALS**  

As artist, I applied some material BP techniques, using masks and glowing materials. The graph view allowed me to easily iterate between textures and effects. 
   
![alt text](blueprint_screenshots/Pablo/material.png)
*Example of a glowing masked material and normals applied in a material class element*    
![alt text](blueprint_screenshots/Pablo/material_02.png)
*Exampleof an opaque material with stone texture with normals applied in a material class element*    

**EDITING EXISTING BLUEPRINTS**  

Through several game test instances I must edit different parameters of several exiting BP:
- Add or subtract delay time to spawners and UI effects
- Create variables in FPCB to activate or deactivate UI elements.
- Add and edit animation timelines of Hearts, spikes and levers. 
- Change damage made by objects (spikes, lava, spawners)
- Increase or decrease speed of spikes, spawners, player.
- change triggerable parameters of levers and doors. 
- Edit gun appearance and triggerable objects meshes and materials.  
- Change material textures and effects.

The visual aspect of the blueprints facilitates my job as artist allowing me to easily edit those parameters without breaking the code. 
  
![alt text](blueprint_screenshots/Pablo/heart.png)
*Screenshot of edition made in a Heart blueprint, adding sounds and editing timeline animation*    
![alt text](blueprint_screenshots/Pablo/heart_pot.png)
*A bluerpint cretaed to release a heart element from a destructible bottle asset*    
![alt text](blueprint_screenshots/Pablo/lava.png)
*Edition of the parameters of a water block to generate damage*    



