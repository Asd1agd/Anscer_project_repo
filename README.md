🧠 Anscer Project

This repository contains the Anscer Project, a robot simulation and trajectory visualization system using ROS 2, Gazebo, and RViz2. It is built in the ros2_ws7 workspace and currently tracked under the master branch.
📦 Dependencies

Before launching the project, make sure the following packages and tools are pre-installed:

    ROS 2 Humble

    Gazebo (with TurtleBot3 world support)

    RViz2

    turtlebot3_gazebo

    turtlebot3_navigation2

    ✅ Make sure to source your ROS 2 environment and set the TurtleBot3 model:

export TURTLEBOT3_MODEL=burger

🚀 Getting Started
Clone the Repository

git clone git@github.com:Asd1agd/Anscer_project_repo.git
cd Anscer_project_repo/ros2_ws7
colcon build
source install/setup.bash

🧩 Project Structure

Anscer_project_repo/
├── ros2_ws7/
│   ├── src/
│   │   └── bring_up_anscer/
│   │       ├── launch/
│   │       │   └── combined.launch.xml
│   │       ├── package.xml
│   │       └── CMakeLists.txt
│   ├── install/
│   └── README.md

📽️ Running the Simulation

Open three separate terminals and execute the following commands:
🧠 Terminal 1 – Bring up all Anscer services and nodes:

ros2 launch bring_up_anscer combined.launch.xml

🌍 Terminal 2 – Launch Gazebo with TurtleBot3 world:

ros2 launch turtlebot3_gazebo turtlebot3_world.launch.py

🗺️ Terminal 3 – Launch Navigation Stack:

ros2 launch turtlebot3_navigation2 navigation2.launch.py

Once all nodes are launched, your project will visualize and save the robot's trajectory in RViz2.
🧠 Functionality
🛤️ Real-time Trajectory Saving (Service 1)

The node trajectory_publisher_saver.py subscribes to /odom, saves the robot's path in real-time, and publishes:

    Line Strip markers

    Arrow markers representing heading

It provides a ROS 2 service save_trajectory where you can specify how many seconds back you want the path saved.
📦 Service Request Format:

    Type: TimeInSec.srv

    Request field: float32 time_sec

A CSV file gets saved at:

/home/asd/ros2_ws7/trajectories/trajectory_<timestamp>_<duration>s.csv

📈 Trajectory Loading and Visualization (Service 2)

The node trajectory_visualizer.py offers a service named load_trajectory_csv that takes a file path to a saved CSV and publishes its contents as:

    A Line Strip

    Directional Arrows

This is useful for analyzing past paths, debugging, or evaluating navigation performance.
📦 Service Request Format:

    Type: CsvPath.srv

    Request field: string filepath

Once loaded, markers are continuously published on the topic /loaded_trajectory_markers.
📂 Trajectory CSV Format

Each saved CSV includes:

time_sec,x,y,z,w
1612381835.23,1.23,0.45,0.00,[0.0, 0.0, 0.0, 1.0]
...

Where:

    x, y, z = Position

    w = Orientation quaternion [x, y, z, w]

🙋 Support

For issues, suggestions, or contributions, feel free to raise an Issue or fork this repo.
