# CloudEngine

CloudEngine is a C++/Opengl second year student project realised as a team of 3 peoples : [William Dewaele](https://github.com/Wdewaele), [Charly Jeauc](https://github.com/CJeauc) and myself [Saad Raouf](https://github.com/Synyproxy), in the given time of 5 months.

![alt text](https://github.com/Synyproxy/CloudEngine/blob/main/Screenshots/Editor.PNG)

Example of the game we made with the engine. It is a first person puzzle game, with platforms and physics
![alt text](https://github.com/Synyproxy/CloudEngine/blob/main/Screenshots/Game-Demo.PNG)

Example of Model loading and Custom shading and textures
![alt text](https://github.com/Synyproxy/CloudEngine/blob/main/Screenshots/ToonShading.PNG)

## What is this project about

- Make a game engine from scratch in C++
- The final objective is to make a fps-puzle game with CloudEngine
- Use as few libraries as possible (if we want to use something, we have to implemente it)
- The project counts as our end year project for our second year at Isart Digital Montréal

![](https://media.giphy.com/media/27II2p7JgqbdA65mSD/giphy.gif)

Collision and jump using box collider components and a rigidbody component. The floating cube is a child of the moving and don't have any collider nor physic.

## Constraints

- The editor must work on Windows.
- The engine must use our own mathematics library.
- The engine can only support one rendering API.
- The engine can use an existing physic library.

## My part

### Core Engine Contributions

#### Core Systems:

Engineered Essential Components: Designed and implemented fundamental aspects of the engine, including input management systems and resource management, ensuring efficient asset handling and responsive user interactions.

#### Rendering Pipeline:

Complete Pipeline Development: Designed and implemented the entire rendering pipeline, covering everything from model loading to texture mapping, lighting, and shader integration. This pipeline was critical to the visual fidelity and performance of the engine.

### Editor Contributions:

#### Scene and Game View Features

Core Editor Functionality: Designed and implemented essential editor features, including the scene and game view. This work enabled real-time scene management and the ability to seamlessly switch between editing and play mode, providing a robust development environment for designers.

#### Scene Management: Developed tools to manage scenes efficiently within the editor, empowering designers to organize and manipulate game elements effectively.

## Libraries used

- Bullet
- Assimp
- Irrklang
- OpenGl
- Qt

## Project status

- The project is currently in progress, so some features will come on future updates.
- We are currently halfway through the time given for the project (deadline : 14 june 2019).
- Note: This is not the final project's source code.

## Build Instruction

- Qt is needed to be installed on the system. https://www.qt.io/download-qt-installer-oss
- To run the engine you need to set the project "Game" or the project "Editor" as startup project
- To build the editor project, you need to install QT (which is quite heavy).
