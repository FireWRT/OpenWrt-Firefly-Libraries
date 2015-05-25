
/* Definitions for config.h which we don't want autoheader to clobber */

#ifdef __cplusplus
#ifdef  HAVE_CXX0X_UNORDERED
#  include <unordered_map>
#  include <unordered_set>
#  include <functional>
#  include <memory>
#  define STD_UNORDERED_MAP std::unordered_map
#  define STD_UNORDERED_SET std::unordered_set
#  define STD_FUNCTION      std::function
#  define STD_BIND          std::bind
#  define STD_PLACEHOLDERS  std::placeholders
#  define STD_SHARED_PTR    std::shared_ptr
#  define STD_WEAK_PTR      std::weak_ptr
#elif defined(HAVE_TR1_UNORDERED)
#  include <tr1/unordered_map>
#  include <tr1/unordered_set>
#  include <tr1/functional>
#  include <tr1/memory>
#  define STD_UNORDERED_MAP std::tr1::unordered_map
#  define STD_UNORDERED_SET std::tr1::unordered_set
#  define STD_FUNCTION      std::tr1::function
#  define STD_BIND          std::tr1::bind
#  define STD_PLACEHOLDERS  std::tr1::placeholders
#  define STD_SHARED_PTR    std::tr1::shared_ptr
#  define STD_WEAK_PTR      std::tr1::weak_ptr
#else
#  include <map>
#  include <set>
#  include <functional>
#  define STD_UNORDERED_MAP std::map
#  define STD_UNORDERED_SET std::set
/* Yeah we're cooked if the code uses these features */
#  define STD_FUNCTION 
#  define STD_BIND
#  define STD_PLACEHOLDERS
#  define STD_SHARED_PTR
#  define STD_WEAK_PTR  
#endif

#endif /* c++ */
