// Generated by gencpp from file turtlebot_actions/FindFiducialGoal.msg
// DO NOT EDIT!


#ifndef TURTLEBOT_ACTIONS_MESSAGE_FINDFIDUCIALGOAL_H
#define TURTLEBOT_ACTIONS_MESSAGE_FINDFIDUCIALGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace turtlebot_actions
{
template <class ContainerAllocator>
struct FindFiducialGoal_
{
  typedef FindFiducialGoal_<ContainerAllocator> Type;

  FindFiducialGoal_()
    : camera_name()
    , pattern_width(0)
    , pattern_height(0)
    , pattern_size(0.0)
    , pattern_type(0)  {
    }
  FindFiducialGoal_(const ContainerAllocator& _alloc)
    : camera_name(_alloc)
    , pattern_width(0)
    , pattern_height(0)
    , pattern_size(0.0)
    , pattern_type(0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _camera_name_type;
  _camera_name_type camera_name;

   typedef uint8_t _pattern_width_type;
  _pattern_width_type pattern_width;

   typedef uint8_t _pattern_height_type;
  _pattern_height_type pattern_height;

   typedef float _pattern_size_type;
  _pattern_size_type pattern_size;

   typedef uint8_t _pattern_type_type;
  _pattern_type_type pattern_type;


    enum { CHESSBOARD = 1u };
     enum { CIRCLES_GRID = 2u };
     enum { ASYMMETRIC_CIRCLES_GRID = 3u };
 

  typedef boost::shared_ptr< ::turtlebot_actions::FindFiducialGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::turtlebot_actions::FindFiducialGoal_<ContainerAllocator> const> ConstPtr;

}; // struct FindFiducialGoal_

typedef ::turtlebot_actions::FindFiducialGoal_<std::allocator<void> > FindFiducialGoal;

typedef boost::shared_ptr< ::turtlebot_actions::FindFiducialGoal > FindFiducialGoalPtr;
typedef boost::shared_ptr< ::turtlebot_actions::FindFiducialGoal const> FindFiducialGoalConstPtr;

// constants requiring out of line definition

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::turtlebot_actions::FindFiducialGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::turtlebot_actions::FindFiducialGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace turtlebot_actions

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'turtlebot_actions': ['/home/diab/turtlebot/devel/share/turtlebot_actions/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::turtlebot_actions::FindFiducialGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::turtlebot_actions::FindFiducialGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::turtlebot_actions::FindFiducialGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::turtlebot_actions::FindFiducialGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::turtlebot_actions::FindFiducialGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::turtlebot_actions::FindFiducialGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::turtlebot_actions::FindFiducialGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8906385fe785bb5733551eb61968fe5b";
  }

  static const char* value(const ::turtlebot_actions::FindFiducialGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8906385fe785bb57ULL;
  static const uint64_t static_value2 = 0x33551eb61968fe5bULL;
};

template<class ContainerAllocator>
struct DataType< ::turtlebot_actions::FindFiducialGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "turtlebot_actions/FindFiducialGoal";
  }

  static const char* value(const ::turtlebot_actions::FindFiducialGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::turtlebot_actions::FindFiducialGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#goal definition\n\
uint8   CHESSBOARD = 1\n\
uint8   CIRCLES_GRID = 2\n\
uint8   ASYMMETRIC_CIRCLES_GRID =3\n\
\n\
string    camera_name       # name of the camera \n\
uint8     pattern_width     # number of objects across\n\
uint8     pattern_height    # number of objects down\n\
float32   pattern_size      # size the object pattern (square size or circle size)\n\
uint8     pattern_type      # type of pattern (CHESSBOARD, CIRCLES_GRID, ASYMMETRIC_CIRCLES_GRID)\n\
";
  }

  static const char* value(const ::turtlebot_actions::FindFiducialGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::turtlebot_actions::FindFiducialGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.camera_name);
      stream.next(m.pattern_width);
      stream.next(m.pattern_height);
      stream.next(m.pattern_size);
      stream.next(m.pattern_type);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FindFiducialGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::turtlebot_actions::FindFiducialGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::turtlebot_actions::FindFiducialGoal_<ContainerAllocator>& v)
  {
    s << indent << "camera_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.camera_name);
    s << indent << "pattern_width: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.pattern_width);
    s << indent << "pattern_height: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.pattern_height);
    s << indent << "pattern_size: ";
    Printer<float>::stream(s, indent + "  ", v.pattern_size);
    s << indent << "pattern_type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.pattern_type);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TURTLEBOT_ACTIONS_MESSAGE_FINDFIDUCIALGOAL_H
