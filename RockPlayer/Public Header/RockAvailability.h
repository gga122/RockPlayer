//
//  RockAvailability.h
//  RockPlayer
//
//  Created by Henry on 2019/8/1.
//  Copyright © 2019 Mickyzhu. All rights reserved.
//

#ifndef RockAvailability_h
#define RockAvailability_h

#if defined(__cplusplus)
#define RP_EXTERN extern "C"
#else
#define RP_EXTERN extern
#endif

#define RP_EXPORT RP_EXTERN
#define RP_IMPORT RP_EXTERN

#if defined(__GNUC__)
#define RP_INLINE static __inline__ __attribute__((always_inline))
#elif defined(__MWERKS__) || defined(__cplusplus)
#define RP_INLINE static inline
#elif defined(_MSC_VER)
#define RP_INLINE static __inline
#endif


#endif /* RockAvailability_h */
