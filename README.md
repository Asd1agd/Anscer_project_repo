# Anscer Project

This repository contains the **Anscer Project**, developed and maintained in the `ros2_ws7` workspace. It is currently saved and tracked under the `master` branch.

## 📁 Project Structure

- **ros2_ws7/**: Main ROS 2 workspace containing all source code, packages, and launch files.

## 🚀 Getting Started

### Clone the Repository
```bash
git clone git@github.com:Asd1agd/Anscer_project_repo.git
cd Anscer_project_repo/ros2_ws7
```

Sure! Here's your README.md content formatted properly in Markdown, ready to be copy-pasted into your README.md file:

# 🤖 Anscer Project

This repository contains the **Anscer Project**, a modular robot bring-up system built on ROS 2. It is designed to launch simulation and navigation environments using TurtleBot3 and Gazebo. The project is structured within the `ros2_ws7` workspace and developed under the `master` branch.

---

## 📁 Project Structure

Anscer_project_repo/ ├── ros2_ws7/ │ ├── src/ │ │ └── bring_up_anscer/ │ │ ├── launch/ │ │ │ └── combined.launch.xml │ │ ├── package.xml │ │ └── CMakeLists.txt │ └── install/ └── README.md


---

## ✅ Prerequisites

Make sure the following are installed before launching the project:

- ROS 2 Humble (or compatible version)
- `gazebo_ros`
- `turtlebot3_gazebo`
- `turtlebot3_navigation2`
- `rviz2`

You can install them using the following command:

```bash
sudo apt install ros-humble-gazebo-ros-pkgs \
                 ros-humble-turtlebot3-gazebo \
                 ros-humble-turtlebot3-navigation2 \
                 ros-humble-rviz2

Set your TurtleBot3 model before running any launch files:

export TURTLEBOT3_MODEL=burger

🔧 Clone and Build the Project

git clone git@github.com:Asd1agd/Anscer_project_repo.git
cd Anscer_project_repo/ros2_ws7
colcon build
source install/setup.bash

🚀 Launch Instructions

Use three separate terminals and source the workspace in each one:
🟢 Terminal 1: Anscer bring-up

ros2 launch bring_up_anscer combined.launch.xml

🌍 Terminal 2: Launch Gazebo world

ros2 launch turtlebot3_gazebo turtlebot3_world.launch.py

🧭 Terminal 3: Launch Navigation2

ros2 launch turtlebot3_navigation2 navigation2.launch.py


👨‍💻 Maintainer

Maintained by Asd1agd.


