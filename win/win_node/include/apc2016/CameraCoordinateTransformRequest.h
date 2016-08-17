// Generated by gencpp from file apc2016/CameraCoordinateTransformRequest.msg
// DO NOT EDIT!


#ifndef APC2016_MESSAGE_CAMERACOORDINATETRANSFORMREQUEST_H
#define APC2016_MESSAGE_CAMERACOORDINATETRANSFORMREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Twist.h>
#include <geometry_msgs/Twist.h>

namespace apc2016
{
template <class ContainerAllocator>
struct CameraCoordinateTransformRequest_
{
  typedef CameraCoordinateTransformRequest_<ContainerAllocator> Type;

  CameraCoordinateTransformRequest_()
    : point()
    , xyzwpr()  {
    }
  CameraCoordinateTransformRequest_(const ContainerAllocator& _alloc)
    : point(_alloc)
    , xyzwpr(_alloc)  {
    }



   typedef  ::geometry_msgs::Twist_<ContainerAllocator>  _point_type;
  _point_type point;

   typedef  ::geometry_msgs::Twist_<ContainerAllocator>  _xyzwpr_type;
  _xyzwpr_type xyzwpr;




  typedef boost::shared_ptr< ::apc2016::CameraCoordinateTransformRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::apc2016::CameraCoordinateTransformRequest_<ContainerAllocator> const> ConstPtr;

}; // struct CameraCoordinateTransformRequest_

typedef ::apc2016::CameraCoordinateTransformRequest_<std::allocator<void> > CameraCoordinateTransformRequest;

typedef boost::shared_ptr< ::apc2016::CameraCoordinateTransformRequest > CameraCoordinateTransformRequestPtr;
typedef boost::shared_ptr< ::apc2016::CameraCoordinateTransformRequest const> CameraCoordinateTransformRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::apc2016::CameraCoordinateTransformRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::apc2016::CameraCoordinateTransformRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace apc2016

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'apc2016': ['/home/kamiya/data/apc/ros/src/apc2016/msg', '/home/kamiya/data/apc/ros/devel/share/apc2016/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::apc2016::CameraCoordinateTransformRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::apc2016::CameraCoordinateTransformRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::apc2016::CameraCoordinateTransformRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::apc2016::CameraCoordinateTransformRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::apc2016::CameraCoordinateTransformRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::apc2016::CameraCoordinateTransformRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::apc2016::CameraCoordinateTransformRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d5fc319763bf1dd98b17c746d609b38b";
  }

  static const char* value(const ::apc2016::CameraCoordinateTransformRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd5fc319763bf1dd9ULL;
  static const uint64_t static_value2 = 0x8b17c746d609b38bULL;
};

template<class ContainerAllocator>
struct DataType< ::apc2016::CameraCoordinateTransformRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "apc2016/CameraCoordinateTransformRequest";
  }

  static const char* value(const ::apc2016::CameraCoordinateTransformRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::apc2016::CameraCoordinateTransformRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/Twist point\n\
geometry_msgs/Twist xyzwpr\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Twist\n\
# This expresses velocity in free space broken into its linear and angular parts.\n\
Vector3  linear\n\
Vector3  angular\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::apc2016::CameraCoordinateTransformRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::apc2016::CameraCoordinateTransformRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.point);
      stream.next(m.xyzwpr);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct CameraCoordinateTransformRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::apc2016::CameraCoordinateTransformRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::apc2016::CameraCoordinateTransformRequest_<ContainerAllocator>& v)
  {
    s << indent << "point: ";
    s << std::endl;
    Printer< ::geometry_msgs::Twist_<ContainerAllocator> >::stream(s, indent + "  ", v.point);
    s << indent << "xyzwpr: ";
    s << std::endl;
    Printer< ::geometry_msgs::Twist_<ContainerAllocator> >::stream(s, indent + "  ", v.xyzwpr);
  }
};

} // namespace message_operations
} // namespace ros

#endif // APC2016_MESSAGE_CAMERACOORDINATETRANSFORMREQUEST_H