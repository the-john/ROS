#include <gazebo/gazebo.hh>			//Include a set of Gazebo functions

namespace gazebo
{
  class WorldPluginMyRobot : public WorldPlugin	//This is the plugin that I am creating that inherits from the WorldPlugin Gazebo class
  {
    public: WorldPluginMyRobot() : WorldPlugin()//Inside the constructor of this class we are printing the Hello World statement
            {
              printf("Welcome to Delton's' World! \n");
            }
    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)//Mandatory, receives info from the World file
            {
            }
  };
  GZ_REGISTER_WORLD_PLUGIN(WorldPluginMyRobot)	//Register the plugin with the simulator
}
