// Generated by gencpp from file robot_functionality/Gettting_Transform.msg
// DO NOT EDIT!


#ifndef ROBOT_FUNCTIONALITY_MESSAGE_GETTTING_TRANSFORM_H
#define ROBOT_FUNCTIONALITY_MESSAGE_GETTTING_TRANSFORM_H

#include <ros/service_traits.h>


#include <robot_functionality/Gettting_TransformRequest.h>
#include <robot_functionality/Gettting_TransformResponse.h>


namespace robot_functionality
{

struct Gettting_Transform
{

typedef Gettting_TransformRequest Request;
typedef Gettting_TransformResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Gettting_Transform
} // namespace robot_functionality


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::robot_functionality::Gettting_Transform > {
  static const char* value()
  {
    return "a7995ca0c7b7430d83491b182946f79d";
  }

  static const char* value(const ::robot_functionality::Gettting_Transform&) { return value(); }
};

template<>
struct DataType< ::robot_functionality::Gettting_Transform > {
  static const char* value()
  {
    return "robot_functionality/Gettting_Transform";
  }

  static const char* value(const ::robot_functionality::Gettting_Transform&) { return value(); }
};


// service_traits::MD5Sum< ::robot_functionality::Gettting_TransformRequest> should match
// service_traits::MD5Sum< ::robot_functionality::Gettting_Transform >
template<>
struct MD5Sum< ::robot_functionality::Gettting_TransformRequest>
{
  static const char* value()
  {
    return MD5Sum< ::robot_functionality::Gettting_Transform >::value();
  }
  static const char* value(const ::robot_functionality::Gettting_TransformRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::robot_functionality::Gettting_TransformRequest> should match
// service_traits::DataType< ::robot_functionality::Gettting_Transform >
template<>
struct DataType< ::robot_functionality::Gettting_TransformRequest>
{
  static const char* value()
  {
    return DataType< ::robot_functionality::Gettting_Transform >::value();
  }
  static const char* value(const ::robot_functionality::Gettting_TransformRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::robot_functionality::Gettting_TransformResponse> should match
// service_traits::MD5Sum< ::robot_functionality::Gettting_Transform >
template<>
struct MD5Sum< ::robot_functionality::Gettting_TransformResponse>
{
  static const char* value()
  {
    return MD5Sum< ::robot_functionality::Gettting_Transform >::value();
  }
  static const char* value(const ::robot_functionality::Gettting_TransformResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::robot_functionality::Gettting_TransformResponse> should match
// service_traits::DataType< ::robot_functionality::Gettting_Transform >
template<>
struct DataType< ::robot_functionality::Gettting_TransformResponse>
{
  static const char* value()
  {
    return DataType< ::robot_functionality::Gettting_Transform >::value();
  }
  static const char* value(const ::robot_functionality::Gettting_TransformResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROBOT_FUNCTIONALITY_MESSAGE_GETTTING_TRANSFORM_H
