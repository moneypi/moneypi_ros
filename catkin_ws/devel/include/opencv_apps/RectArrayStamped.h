// Generated by gencpp from file opencv_apps/RectArrayStamped.msg
// DO NOT EDIT!


#ifndef OPENCV_APPS_MESSAGE_RECTARRAYSTAMPED_H
#define OPENCV_APPS_MESSAGE_RECTARRAYSTAMPED_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <opencv_apps/Rect.h>

namespace opencv_apps
{
template <class ContainerAllocator>
struct RectArrayStamped_
{
  typedef RectArrayStamped_<ContainerAllocator> Type;

  RectArrayStamped_()
    : header()
    , rects()  {
    }
  RectArrayStamped_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , rects(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::opencv_apps::Rect_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::opencv_apps::Rect_<ContainerAllocator> >::other >  _rects_type;
  _rects_type rects;





  typedef boost::shared_ptr< ::opencv_apps::RectArrayStamped_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::opencv_apps::RectArrayStamped_<ContainerAllocator> const> ConstPtr;

}; // struct RectArrayStamped_

typedef ::opencv_apps::RectArrayStamped_<std::allocator<void> > RectArrayStamped;

typedef boost::shared_ptr< ::opencv_apps::RectArrayStamped > RectArrayStampedPtr;
typedef boost::shared_ptr< ::opencv_apps::RectArrayStamped const> RectArrayStampedConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::opencv_apps::RectArrayStamped_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::opencv_apps::RectArrayStamped_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace opencv_apps

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/melodic/share/sensor_msgs/cmake/../msg'], 'opencv_apps': ['/home/pi/catkin_ws/src/opencv_apps/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::opencv_apps::RectArrayStamped_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::opencv_apps::RectArrayStamped_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::opencv_apps::RectArrayStamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::opencv_apps::RectArrayStamped_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::opencv_apps::RectArrayStamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::opencv_apps::RectArrayStamped_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::opencv_apps::RectArrayStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f29b08b33e061c73d7d9fc35142631d0";
  }

  static const char* value(const ::opencv_apps::RectArrayStamped_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf29b08b33e061c73ULL;
  static const uint64_t static_value2 = 0xd7d9fc35142631d0ULL;
};

template<class ContainerAllocator>
struct DataType< ::opencv_apps::RectArrayStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "opencv_apps/RectArrayStamped";
  }

  static const char* value(const ::opencv_apps::RectArrayStamped_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::opencv_apps::RectArrayStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"Rect[] rects\n"
"\n"
"\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: opencv_apps/Rect\n"
"# opencv Rect data type, x-y is center point\n"
"float64 x\n"
"float64 y\n"
"float64 width\n"
"float64 height\n"
"\n"
;
  }

  static const char* value(const ::opencv_apps::RectArrayStamped_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::opencv_apps::RectArrayStamped_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.rects);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RectArrayStamped_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::opencv_apps::RectArrayStamped_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::opencv_apps::RectArrayStamped_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "rects[]" << std::endl;
    for (size_t i = 0; i < v.rects.size(); ++i)
    {
      s << indent << "  rects[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::opencv_apps::Rect_<ContainerAllocator> >::stream(s, indent + "    ", v.rects[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // OPENCV_APPS_MESSAGE_RECTARRAYSTAMPED_H
