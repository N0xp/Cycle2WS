// Generated by gencpp from file vmxpi_ros/StringResRequest.msg
// DO NOT EDIT!


#ifndef VMXPI_ROS_MESSAGE_STRINGRESREQUEST_H
#define VMXPI_ROS_MESSAGE_STRINGRESREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace vmxpi_ros
{
template <class ContainerAllocator>
struct StringResRequest_
{
  typedef StringResRequest_<ContainerAllocator> Type;

  StringResRequest_()
    {
    }
  StringResRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::vmxpi_ros::StringResRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vmxpi_ros::StringResRequest_<ContainerAllocator> const> ConstPtr;

}; // struct StringResRequest_

typedef ::vmxpi_ros::StringResRequest_<std::allocator<void> > StringResRequest;

typedef boost::shared_ptr< ::vmxpi_ros::StringResRequest > StringResRequestPtr;
typedef boost::shared_ptr< ::vmxpi_ros::StringResRequest const> StringResRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vmxpi_ros::StringResRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vmxpi_ros::StringResRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace vmxpi_ros

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::vmxpi_ros::StringResRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vmxpi_ros::StringResRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vmxpi_ros::StringResRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vmxpi_ros::StringResRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vmxpi_ros::StringResRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vmxpi_ros::StringResRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vmxpi_ros::StringResRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::vmxpi_ros::StringResRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::vmxpi_ros::StringResRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vmxpi_ros/StringResRequest";
  }

  static const char* value(const ::vmxpi_ros::StringResRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vmxpi_ros::StringResRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
;
  }

  static const char* value(const ::vmxpi_ros::StringResRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vmxpi_ros::StringResRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct StringResRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vmxpi_ros::StringResRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::vmxpi_ros::StringResRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // VMXPI_ROS_MESSAGE_STRINGRESREQUEST_H
