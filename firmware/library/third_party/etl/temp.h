// SJSU-Dev2: Adding system_header
#pragma GCC system_header

/******************************************************************************
The MIT License(MIT)

Embedded Template Library.
https://github.com/ETLCPP/etl
https://www.etlcpp.com

Copyright(c) 2017 jwellbelove

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files(the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and / or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions :

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
******************************************************************************/

#ifndef __ETL_TYPE_LOOKUP__
#define __ETL_TYPE_LOOKUP__

#undef ETL_FILE
#define ETL_FILE "41"

#if 0
#error THIS HEADER IS A GENERATOR. DO NOT INCLUDE.
#endif

//***************************************************************************
// This file has been auto generated. Do not edit this file.
//***************************************************************************

namespace etl
{
  //***************************************************************************
  template <const size_t T1ID,      typename T1,
            const size_t T2ID  = 0, typename T2  = void,
            const size_t T3ID  = 0, typename T3  = void,
            const size_t T4ID  = 0, typename T4  = void,
            const size_t T5ID  = 0, typename T5  = void,
            const size_t T6ID  = 0, typename T6  = void,
            const size_t T7ID  = 0, typename T7  = void,
            const size_t T8ID  = 0, typename T8  = void,
            const size_t T9ID  = 0, typename T9  = void,
            const size_t T10ID  = 0, typename T10  = void,
            const size_t T11ID  = 0, typename T11  = void,
            const size_t T12ID  = 0, typename T12  = void,
            const size_t T13ID  = 0, typename T13  = void,
            const size_t T14ID  = 0, typename T14  = void,
            const size_t T15ID  = 0, typename T15  = void,
            const size_t T16ID  = 0, typename T16  = void>
  struct type_lookup
  {
    //************************************
    template <size_t ID>
    struct type_from_id
    {
      typedef 
            typename etl::conditional<ID == T1ID,  T1,
            typename etl::conditional<ID == T2ID,  T2,
            typename etl::conditional<ID == T3ID,  T3,
            typename etl::conditional<ID == T4ID,  T4,
            typename etl::conditional<ID == T5ID,  T5,
            typename etl::conditional<ID == T6ID,  T6,
            typename etl::conditional<ID == T7ID,  T7,
            typename etl::conditional<ID == T8ID,  T8,
            typename etl::conditional<ID == T9ID,  T9,
            typename etl::conditional<ID == T10ID,  T10,
            typename etl::conditional<ID == T11ID,  T11,
            typename etl::conditional<ID == T12ID,  T12,
            typename etl::conditional<ID == T13ID,  T13,
            typename etl::conditional<ID == T14ID,  T14,
            typename etl::conditional<ID == T15ID,  T15,
            typename etl::conditional<ID == T16ID,  T16,
            void>::type>::type>::type>::type>::type>::type>::type>
                 ::type>::type>::type>::type>::type>::type>::type>::type type;
      };

    //************************************
    template <typename T>
    struct id_from_type
    {
      enum
      {
        UNKNOWN = 0xFFFFFFFF,
        value = 
          etl::is_same<T, T1>::value ? T1ID :
          etl::is_same<T, T2>::value ? T2ID :
          etl::is_same<T, T3>::value ? T3ID :
          etl::is_same<T, T4>::value ? T4ID :
          etl::is_same<T, T5>::value ? T5ID :
          etl::is_same<T, T6>::value ? T6ID :
          etl::is_same<T, T7>::value ? T7ID :
          etl::is_same<T, T8>::value ? T8ID :
          etl::is_same<T, T9>::value ? T9ID :
          etl::is_same<T, T10>::value ? T10ID :
          etl::is_same<T, T11>::value ? T11ID :
          etl::is_same<T, T12>::value ? T12ID :
          etl::is_same<T, T13>::value ? T13ID :
          etl::is_same<T, T14>::value ? T14ID :
          etl::is_same<T, T15>::value ? T15ID :
          etl::is_same<T, T16>::value ? T16ID :
          UNKNOWN
      };
    };
  };

    //*************************************************************************

  //***************************************************************************
  // Specialisation for 15 types.
  //***************************************************************************
  template <const size_t T1ID, typename T1,
            const size_t T2ID, typename T2,
            const size_t T3ID, typename T3,
            const size_t T4ID, typename T4,
            const size_t T5ID, typename T5,
            const size_t T6ID, typename T6,
            const size_t T7ID, typename T7,
            const size_t T8ID, typename T8,
            const size_t T9ID, typename T9,
            const size_t T10ID, typename T10,
            const size_t T11ID, typename T11,
            const size_t T12ID, typename T12,
            const size_t T13ID, typename T13,
            const size_t T14ID, typename T14,
            const size_t T15ID, typename T15>
  struct type_lookup<T1ID, T1, T2ID, T2, T3ID, T3, T4ID, T4, T5ID, T5, T6ID, T6, T7ID, T7, T8ID, T8, 
                     T9ID, T9, T10ID, T10, T11ID, T11, T12ID, T12, T13ID, T13, T14ID, T14, T15ID, T15, 0, void>
  {
    //************************************
    template <size_t ID>
    struct type_from_id
    {
      typedef 
            typename etl::conditional<ID == T1ID,  T1,
            typename etl::conditional<ID == T2ID,  T2,
            typename etl::conditional<ID == T3ID,  T3,
            typename etl::conditional<ID == T4ID,  T4,
            typename etl::conditional<ID == T5ID,  T5,
            typename etl::conditional<ID == T6ID,  T6,
            typename etl::conditional<ID == T7ID,  T7,
            typename etl::conditional<ID == T8ID,  T8,
            typename etl::conditional<ID == T9ID,  T9,
            typename etl::conditional<ID == T10ID,  T10,
            typename etl::conditional<ID == T11ID,  T11,
            typename etl::conditional<ID == T12ID,  T12,
            typename etl::conditional<ID == T13ID,  T13,
            typename etl::conditional<ID == T14ID,  T14,
            typename etl::conditional<ID == T15ID,  T15,
            void>::type>::type>::type>::type>::type>::type>::type>
                 ::type>::type>::type>::type>::type>::type>::type>::type type;
      };

    //************************************
    template <typename T>
    struct id_from_type
    {
      enum
      {
        UNKNOWN = 0xFFFFFFFF,
        value = 
          etl::is_same<T, T1>::value ? T1ID :
          etl::is_same<T, T2>::value ? T2ID :
          etl::is_same<T, T3>::value ? T3ID :
          etl::is_same<T, T4>::value ? T4ID :
          etl::is_same<T, T5>::value ? T5ID :
          etl::is_same<T, T6>::value ? T6ID :
          etl::is_same<T, T7>::value ? T7ID :
          etl::is_same<T, T8>::value ? T8ID :
          etl::is_same<T, T9>::value ? T9ID :
          etl::is_same<T, T10>::value ? T10ID :
          etl::is_same<T, T11>::value ? T11ID :
          etl::is_same<T, T12>::value ? T12ID :
          etl::is_same<T, T13>::value ? T13ID :
          etl::is_same<T, T14>::value ? T14ID :
          etl::is_same<T, T15>::value ? T15ID :
          UNKNOWN
      };
    };
  };

  //***************************************************************************
  // Specialisation for 14 types.
  //***************************************************************************
  template <const size_t T1ID, typename T1,
            const size_t T2ID, typename T2,
            const size_t T3ID, typename T3,
            const size_t T4ID, typename T4,
            const size_t T5ID, typename T5,
            const size_t T6ID, typename T6,
            const size_t T7ID, typename T7,
            const size_t T8ID, typename T8,
            const size_t T9ID, typename T9,
            const size_t T10ID, typename T10,
            const size_t T11ID, typename T11,
            const size_t T12ID, typename T12,
            const size_t T13ID, typename T13,
            const size_t T14ID, typename T14>
  struct type_lookup<T1ID, T1, T2ID, T2, T3ID, T3, T4ID, T4, T5ID, T5, T6ID, T6, T7ID, T7, T8ID, T8, 
                     T9ID, T9, T10ID, T10, T11ID, T11, T12ID, T12, T13ID, T13, T14ID, T14, 0, void, 0, void>
  {
    //************************************
    template <size_t ID>
    struct type_from_id
    {
      typedef 
            typename etl::conditional<ID == T1ID,  T1,
            typename etl::conditional<ID == T2ID,  T2,
            typename etl::conditional<ID == T3ID,  T3,
            typename etl::conditional<ID == T4ID,  T4,
            typename etl::conditional<ID == T5ID,  T5,
            typename etl::conditional<ID == T6ID,  T6,
            typename etl::conditional<ID == T7ID,  T7,
            typename etl::conditional<ID == T8ID,  T8,
            typename etl::conditional<ID == T9ID,  T9,
            typename etl::conditional<ID == T10ID,  T10,
            typename etl::conditional<ID == T11ID,  T11,
            typename etl::conditional<ID == T12ID,  T12,
            typename etl::conditional<ID == T13ID,  T13,
            typename etl::conditional<ID == T14ID,  T14,
            void>::type>::type>::type>::type>::type>::type>::type>
                 ::type>::type>::type>::type>::type>::type>::type type;
      };

    //************************************
    template <typename T>
    struct id_from_type
    {
      enum
      {
        UNKNOWN = 0xFFFFFFFF,
        value = 
          etl::is_same<T, T1>::value ? T1ID :
          etl::is_same<T, T2>::value ? T2ID :
          etl::is_same<T, T3>::value ? T3ID :
          etl::is_same<T, T4>::value ? T4ID :
          etl::is_same<T, T5>::value ? T5ID :
          etl::is_same<T, T6>::value ? T6ID :
          etl::is_same<T, T7>::value ? T7ID :
          etl::is_same<T, T8>::value ? T8ID :
          etl::is_same<T, T9>::value ? T9ID :
          etl::is_same<T, T10>::value ? T10ID :
          etl::is_same<T, T11>::value ? T11ID :
          etl::is_same<T, T12>::value ? T12ID :
          etl::is_same<T, T13>::value ? T13ID :
          etl::is_same<T, T14>::value ? T14ID :
          UNKNOWN
      };
    };
  };

  //***************************************************************************
  // Specialisation for 13 types.
  //***************************************************************************
  template <const size_t T1ID, typename T1,
            const size_t T2ID, typename T2,
            const size_t T3ID, typename T3,
            const size_t T4ID, typename T4,
            const size_t T5ID, typename T5,
            const size_t T6ID, typename T6,
            const size_t T7ID, typename T7,
            const size_t T8ID, typename T8,
            const size_t T9ID, typename T9,
            const size_t T10ID, typename T10,
            const size_t T11ID, typename T11,
            const size_t T12ID, typename T12,
            const size_t T13ID, typename T13>
  struct type_lookup<T1ID, T1, T2ID, T2, T3ID, T3, T4ID, T4, T5ID, T5, T6ID, T6, T7ID, T7, T8ID, T8, 
                     T9ID, T9, T10ID, T10, T11ID, T11, T12ID, T12, T13ID, T13, 0, void, 0, void, 0, void>
  {
    //************************************
    template <size_t ID>
    struct type_from_id
    {
      typedef 
            typename etl::conditional<ID == T1ID,  T1,
            typename etl::conditional<ID == T2ID,  T2,
            typename etl::conditional<ID == T3ID,  T3,
            typename etl::conditional<ID == T4ID,  T4,
            typename etl::conditional<ID == T5ID,  T5,
            typename etl::conditional<ID == T6ID,  T6,
            typename etl::conditional<ID == T7ID,  T7,
            typename etl::conditional<ID == T8ID,  T8,
            typename etl::conditional<ID == T9ID,  T9,
            typename etl::conditional<ID == T10ID,  T10,
            typename etl::conditional<ID == T11ID,  T11,
            typename etl::conditional<ID == T12ID,  T12,
            typename etl::conditional<ID == T13ID,  T13,
            void>::type>::type>::type>::type>::type>::type>::type>
                 ::type>::type>::type>::type>::type>::type type;
      };

    //************************************
    template <typename T>
    struct id_from_type
    {
      enum
      {
        UNKNOWN = 0xFFFFFFFF,
        value = 
          etl::is_same<T, T1>::value ? T1ID :
          etl::is_same<T, T2>::value ? T2ID :
          etl::is_same<T, T3>::value ? T3ID :
          etl::is_same<T, T4>::value ? T4ID :
          etl::is_same<T, T5>::value ? T5ID :
          etl::is_same<T, T6>::value ? T6ID :
          etl::is_same<T, T7>::value ? T7ID :
          etl::is_same<T, T8>::value ? T8ID :
          etl::is_same<T, T9>::value ? T9ID :
          etl::is_same<T, T10>::value ? T10ID :
          etl::is_same<T, T11>::value ? T11ID :
          etl::is_same<T, T12>::value ? T12ID :
          etl::is_same<T, T13>::value ? T13ID :
          UNKNOWN
      };
    };
  };

  //***************************************************************************
  // Specialisation for 12 types.
  //***************************************************************************
  template <const size_t T1ID, typename T1,
            const size_t T2ID, typename T2,
            const size_t T3ID, typename T3,
            const size_t T4ID, typename T4,
            const size_t T5ID, typename T5,
            const size_t T6ID, typename T6,
            const size_t T7ID, typename T7,
            const size_t T8ID, typename T8,
            const size_t T9ID, typename T9,
            const size_t T10ID, typename T10,
            const size_t T11ID, typename T11,
            const size_t T12ID, typename T12>
  struct type_lookup<T1ID, T1, T2ID, T2, T3ID, T3, T4ID, T4, T5ID, T5, T6ID, T6, T7ID, T7, T8ID, T8, 
                     T9ID, T9, T10ID, T10, T11ID, T11, T12ID, T12, 0, void, 0, void, 0, void, 0, void>
  {
    //************************************
    template <size_t ID>
    struct type_from_id
    {
      typedef 
            typename etl::conditional<ID == T1ID,  T1,
            typename etl::conditional<ID == T2ID,  T2,
            typename etl::conditional<ID == T3ID,  T3,
            typename etl::conditional<ID == T4ID,  T4,
            typename etl::conditional<ID == T5ID,  T5,
            typename etl::conditional<ID == T6ID,  T6,
            typename etl::conditional<ID == T7ID,  T7,
            typename etl::conditional<ID == T8ID,  T8,
            typename etl::conditional<ID == T9ID,  T9,
            typename etl::conditional<ID == T10ID,  T10,
            typename etl::conditional<ID == T11ID,  T11,
            typename etl::conditional<ID == T12ID,  T12,
            void>::type>::type>::type>::type>::type>::type>::type>
                 ::type>::type>::type>::type>::type type;
      };

    //************************************
    template <typename T>
    struct id_from_type
    {
      enum
      {
        UNKNOWN = 0xFFFFFFFF,
        value = 
          etl::is_same<T, T1>::value ? T1ID :
          etl::is_same<T, T2>::value ? T2ID :
          etl::is_same<T, T3>::value ? T3ID :
          etl::is_same<T, T4>::value ? T4ID :
          etl::is_same<T, T5>::value ? T5ID :
          etl::is_same<T, T6>::value ? T6ID :
          etl::is_same<T, T7>::value ? T7ID :
          etl::is_same<T, T8>::value ? T8ID :
          etl::is_same<T, T9>::value ? T9ID :
          etl::is_same<T, T10>::value ? T10ID :
          etl::is_same<T, T11>::value ? T11ID :
          etl::is_same<T, T12>::value ? T12ID :
          UNKNOWN
      };
    };
  };

  //***************************************************************************
  // Specialisation for 11 types.
  //***************************************************************************
  template <const size_t T1ID, typename T1,
            const size_t T2ID, typename T2,
            const size_t T3ID, typename T3,
            const size_t T4ID, typename T4,
            const size_t T5ID, typename T5,
            const size_t T6ID, typename T6,
            const size_t T7ID, typename T7,
            const size_t T8ID, typename T8,
            const size_t T9ID, typename T9,
            const size_t T10ID, typename T10,
            const size_t T11ID, typename T11>
  struct type_lookup<T1ID, T1, T2ID, T2, T3ID, T3, T4ID, T4, T5ID, T5, T6ID, T6, T7ID, T7, T8ID, T8, 
                     T9ID, T9, T10ID, T10, T11ID, T11, 0, void, 0, void, 0, void, 0, void, 0, void>
  {
    //************************************
    template <size_t ID>
    struct type_from_id
    {
      typedef 
            typename etl::conditional<ID == T1ID,  T1,
            typename etl::conditional<ID == T2ID,  T2,
            typename etl::conditional<ID == T3ID,  T3,
            typename etl::conditional<ID == T4ID,  T4,
            typename etl::conditional<ID == T5ID,  T5,
            typename etl::conditional<ID == T6ID,  T6,
            typename etl::conditional<ID == T7ID,  T7,
            typename etl::conditional<ID == T8ID,  T8,
            typename etl::conditional<ID == T9ID,  T9,
            typename etl::conditional<ID == T10ID,  T10,
            typename etl::conditional<ID == T11ID,  T11,
            void>::type>::type>::type>::type>::type>::type>::type>
                 ::type>::type>::type>::type type;
      };

    //************************************
    template <typename T>
    struct id_from_type
    {
      enum
      {
        UNKNOWN = 0xFFFFFFFF,
        value = 
          etl::is_same<T, T1>::value ? T1ID :
          etl::is_same<T, T2>::value ? T2ID :
          etl::is_same<T, T3>::value ? T3ID :
          etl::is_same<T, T4>::value ? T4ID :
          etl::is_same<T, T5>::value ? T5ID :
          etl::is_same<T, T6>::value ? T6ID :
          etl::is_same<T, T7>::value ? T7ID :
          etl::is_same<T, T8>::value ? T8ID :
          etl::is_same<T, T9>::value ? T9ID :
          etl::is_same<T, T10>::value ? T10ID :
          etl::is_same<T, T11>::value ? T11ID :
          UNKNOWN
      };
    };
  };

  //***************************************************************************
  // Specialisation for 10 types.
  //***************************************************************************
  template <const size_t T1ID, typename T1,
            const size_t T2ID, typename T2,
            const size_t T3ID, typename T3,
            const size_t T4ID, typename T4,
            const size_t T5ID, typename T5,
            const size_t T6ID, typename T6,
            const size_t T7ID, typename T7,
            const size_t T8ID, typename T8,
            const size_t T9ID, typename T9,
            const size_t T10ID, typename T10>
  struct type_lookup<T1ID, T1, T2ID, T2, T3ID, T3, T4ID, T4, T5ID, T5, T6ID, T6, T7ID, T7, T8ID, T8, 
                     T9ID, T9, T10ID, T10, 0, void, 0, void, 0, void, 0, void, 0, void, 0, void>
  {
    //************************************
    template <size_t ID>
    struct type_from_id
    {
      typedef 
            typename etl::conditional<ID == T1ID,  T1,
            typename etl::conditional<ID == T2ID,  T2,
            typename etl::conditional<ID == T3ID,  T3,
            typename etl::conditional<ID == T4ID,  T4,
            typename etl::conditional<ID == T5ID,  T5,
            typename etl::conditional<ID == T6ID,  T6,
            typename etl::conditional<ID == T7ID,  T7,
            typename etl::conditional<ID == T8ID,  T8,
            typename etl::conditional<ID == T9ID,  T9,
            typename etl::conditional<ID == T10ID,  T10,
            void>::type>::type>::type>::type>::type>::type>::type>
                 ::type>::type>::type type;
      };

    //************************************
    template <typename T>
    struct id_from_type
    {
      enum
      {
        UNKNOWN = 0xFFFFFFFF,
        value = 
          etl::is_same<T, T1>::value ? T1ID :
          etl::is_same<T, T2>::value ? T2ID :
          etl::is_same<T, T3>::value ? T3ID :
          etl::is_same<T, T4>::value ? T4ID :
          etl::is_same<T, T5>::value ? T5ID :
          etl::is_same<T, T6>::value ? T6ID :
          etl::is_same<T, T7>::value ? T7ID :
          etl::is_same<T, T8>::value ? T8ID :
          etl::is_same<T, T9>::value ? T9ID :
          etl::is_same<T, T10>::value ? T10ID :
          UNKNOWN
      };
    };
  };

  //***************************************************************************
  // Specialisation for 9 types.
  //***************************************************************************
  template <const size_t T1ID, typename T1,
            const size_t T2ID, typename T2,
            const size_t T3ID, typename T3,
            const size_t T4ID, typename T4,
            const size_t T5ID, typename T5,
            const size_t T6ID, typename T6,
            const size_t T7ID, typename T7,
            const size_t T8ID, typename T8,
            const size_t T9ID, typename T9>
  struct type_lookup<T1ID, T1, T2ID, T2, T3ID, T3, T4ID, T4, T5ID, T5, T6ID, T6, T7ID, T7, T8ID, T8, 
                     T9ID, T9, 0, void, 0, void, 0, void, 0, void, 0, void, 0, void, 0, void>
  {
    //************************************
    template <size_t ID>
    struct type_from_id
    {
      typedef 
            typename etl::conditional<ID == T1ID,  T1,
            typename etl::conditional<ID == T2ID,  T2,
            typename etl::conditional<ID == T3ID,  T3,
            typename etl::conditional<ID == T4ID,  T4,
            typename etl::conditional<ID == T5ID,  T5,
            typename etl::conditional<ID == T6ID,  T6,
            typename etl::conditional<ID == T7ID,  T7,
            typename etl::conditional<ID == T8ID,  T8,
            typename etl::conditional<ID == T9ID,  T9,
            void>::type>::type>::type>::type>::type>::type>::type>
                 ::type>::type type;
      };

    //************************************
    template <typename T>
    struct id_from_type
    {
      enum
      {
        UNKNOWN = 0xFFFFFFFF,
        value = 
          etl::is_same<T, T1>::value ? T1ID :
          etl::is_same<T, T2>::value ? T2ID :
          etl::is_same<T, T3>::value ? T3ID :
          etl::is_same<T, T4>::value ? T4ID :
          etl::is_same<T, T5>::value ? T5ID :
          etl::is_same<T, T6>::value ? T6ID :
          etl::is_same<T, T7>::value ? T7ID :
          etl::is_same<T, T8>::value ? T8ID :
          etl::is_same<T, T9>::value ? T9ID :
          UNKNOWN
      };
    };
  };

  //***************************************************************************
  // Specialisation for 8 types.
  //***************************************************************************
  template <const size_t T1ID, typename T1,
            const size_t T2ID, typename T2,
            const size_t T3ID, typename T3,
            const size_t T4ID, typename T4,
            const size_t T5ID, typename T5,
            const size_t T6ID, typename T6,
            const size_t T7ID, typename T7,
            const size_t T8ID, typename T8>
  struct type_lookup<T1ID, T1, T2ID, T2, T3ID, T3, T4ID, T4, T5ID, T5, T6ID, T6, T7ID, T7, T8ID, T8, 
                     0, void, 
                     0, void, 0, void, 0, void, 0, void, 0, void, 0, void, 0, void>
  {
    //************************************
    template <size_t ID>
    struct type_from_id
    {
      typedef 
            typename etl::conditional<ID == T1ID,  T1,
            typename etl::conditional<ID == T2ID,  T2,
            typename etl::conditional<ID == T3ID,  T3,
            typename etl::conditional<ID == T4ID,  T4,
            typename etl::conditional<ID == T5ID,  T5,
            typename etl::conditional<ID == T6ID,  T6,
            typename etl::conditional<ID == T7ID,  T7,
            typename etl::conditional<ID == T8ID,  T8,
            void>::type>::type>::type>::type>::type>::type>::type>::type type;
      };

    //************************************
    template <typename T>
    struct id_from_type
    {
      enum
      {
        UNKNOWN = 0xFFFFFFFF,
        value = 
          etl::is_same<T, T1>::value ? T1ID :
          etl::is_same<T, T2>::value ? T2ID :
          etl::is_same<T, T3>::value ? T3ID :
          etl::is_same<T, T4>::value ? T4ID :
          etl::is_same<T, T5>::value ? T5ID :
          etl::is_same<T, T6>::value ? T6ID :
          etl::is_same<T, T7>::value ? T7ID :
          etl::is_same<T, T8>::value ? T8ID :
          UNKNOWN
      };
    };
  };

  //***************************************************************************
  // Specialisation for 7 types.
  //***************************************************************************
  template <const size_t T1ID, typename T1,
            const size_t T2ID, typename T2,
            const size_t T3ID, typename T3,
            const size_t T4ID, typename T4,
            const size_t T5ID, typename T5,
            const size_t T6ID, typename T6,
            const size_t T7ID, typename T7>
  struct type_lookup<T1ID, T1, T2ID, T2, T3ID, T3, T4ID, T4, T5ID, T5, T6ID, T6, T7ID, T7, 0, void, 0, void, 
                     0, void, 0, void, 0, void, 0, void, 0, void, 0, void, 0, void>
  {
    //************************************
    template <size_t ID>
    struct type_from_id
    {
      typedef 
            typename etl::conditional<ID == T1ID,  T1,
            typename etl::conditional<ID == T2ID,  T2,
            typename etl::conditional<ID == T3ID,  T3,
            typename etl::conditional<ID == T4ID,  T4,
            typename etl::conditional<ID == T5ID,  T5,
            typename etl::conditional<ID == T6ID,  T6,
            typename etl::conditional<ID == T7ID,  T7,
            void>::type>::type>::type>::type>::type>::type>::type type;
      };

    //************************************
    template <typename T>
    struct id_from_type
    {
      enum
      {
        UNKNOWN = 0xFFFFFFFF,
        value = 
          etl::is_same<T, T1>::value ? T1ID :
          etl::is_same<T, T2>::value ? T2ID :
          etl::is_same<T, T3>::value ? T3ID :
          etl::is_same<T, T4>::value ? T4ID :
          etl::is_same<T, T5>::value ? T5ID :
          etl::is_same<T, T6>::value ? T6ID :
          etl::is_same<T, T7>::value ? T7ID :
          UNKNOWN
      };
    };
  };

  //***************************************************************************
  // Specialisation for 6 types.
  //***************************************************************************
  template <const size_t T1ID, typename T1,
            const size_t T2ID, typename T2,
            const size_t T3ID, typename T3,
            const size_t T4ID, typename T4,
            const size_t T5ID, typename T5,
            const size_t T6ID, typename T6>
  struct type_lookup<T1ID, T1, T2ID, T2, T3ID, T3, T4ID, T4, T5ID, T5, T6ID, T6, 0, void, 0, void, 0, void, 
                     0, void, 0, void, 0, void, 0, void, 0, void, 0, void, 0, void>
  {
    //************************************
    template <size_t ID>
    struct type_from_id
    {
      typedef 
            typename etl::conditional<ID == T1ID,  T1,
            typename etl::conditional<ID == T2ID,  T2,
            typename etl::conditional<ID == T3ID,  T3,
            typename etl::conditional<ID == T4ID,  T4,
            typename etl::conditional<ID == T5ID,  T5,
            typename etl::conditional<ID == T6ID,  T6,
            void>::type>::type>::type>::type>::type>::type type;
      };

    //************************************
    template <typename T>
    struct id_from_type
    {
      enum
      {
        UNKNOWN = 0xFFFFFFFF,
        value = 
          etl::is_same<T, T1>::value ? T1ID :
          etl::is_same<T, T2>::value ? T2ID :
          etl::is_same<T, T3>::value ? T3ID :
          etl::is_same<T, T4>::value ? T4ID :
          etl::is_same<T, T5>::value ? T5ID :
          etl::is_same<T, T6>::value ? T6ID :
          UNKNOWN
      };
    };
  };

  //***************************************************************************
  // Specialisation for 5 types.
  //***************************************************************************
  template <const size_t T1ID, typename T1,
            const size_t T2ID, typename T2,
            const size_t T3ID, typename T3,
            const size_t T4ID, typename T4,
            const size_t T5ID, typename T5>
  struct type_lookup<T1ID, T1, T2ID, T2, T3ID, T3, T4ID, T4, T5ID, T5, 0, void, 0, void, 0, void, 0, void, 
                     0, void, 0, void, 0, void, 0, void, 0, void, 0, void, 0, void>
  {
    //************************************
    template <size_t ID>
    struct type_from_id
    {
      typedef 
            typename etl::conditional<ID == T1ID,  T1,
            typename etl::conditional<ID == T2ID,  T2,
            typename etl::conditional<ID == T3ID,  T3,
            typename etl::conditional<ID == T4ID,  T4,
            typename etl::conditional<ID == T5ID,  T5,
            void>::type>::type>::type>::type>::type type;
      };

    //************************************
    template <typename T>
    struct id_from_type
    {
      enum
      {
        UNKNOWN = 0xFFFFFFFF,
        value = 
          etl::is_same<T, T1>::value ? T1ID :
          etl::is_same<T, T2>::value ? T2ID :
          etl::is_same<T, T3>::value ? T3ID :
          etl::is_same<T, T4>::value ? T4ID :
          etl::is_same<T, T5>::value ? T5ID :
          UNKNOWN
      };
    };
  };

  //***************************************************************************
  // Specialisation for 4 types.
  //***************************************************************************
  template <const size_t T1ID, typename T1,
            const size_t T2ID, typename T2,
            const size_t T3ID, typename T3,
            const size_t T4ID, typename T4>
  struct type_lookup<T1ID, T1, T2ID, T2, T3ID, T3, T4ID, T4, 0, void, 0, void, 0, void, 0, void, 0, void, 
                     0, void, 0, void, 0, void, 0, void, 0, void, 0, void, 0, void>
  {
    //************************************
    template <size_t ID>
    struct type_from_id
    {
      typedef 
            typename etl::conditional<ID == T1ID,  T1,
            typename etl::conditional<ID == T2ID,  T2,
            typename etl::conditional<ID == T3ID,  T3,
            typename etl::conditional<ID == T4ID,  T4,
            void>::type>::type>::type>::type type;
      };

    //************************************
    template <typename T>
    struct id_from_type
    {
      enum
      {
        UNKNOWN = 0xFFFFFFFF,
        value = 
          etl::is_same<T, T1>::value ? T1ID :
          etl::is_same<T, T2>::value ? T2ID :
          etl::is_same<T, T3>::value ? T3ID :
          etl::is_same<T, T4>::value ? T4ID :
          UNKNOWN
      };
    };
  };

  //***************************************************************************
  // Specialisation for 3 types.
  //***************************************************************************
  template <const size_t T1ID, typename T1,
            const size_t T2ID, typename T2,
            const size_t T3ID, typename T3>
  struct type_lookup<T1ID, T1, T2ID, T2, T3ID, T3, 0, void, 0, void, 0, void, 0, void, 0, void, 0, void, 
                     0, void, 0, void, 0, void, 0, void, 0, void, 0, void, 0, void>
  {
    //************************************
    template <size_t ID>
    struct type_from_id
    {
      typedef 
            typename etl::conditional<ID == T1ID,  T1,
            typename etl::conditional<ID == T2ID,  T2,
            typename etl::conditional<ID == T3ID,  T3,
            void>::type>::type>::type type;
      };

    //************************************
    template <typename T>
    struct id_from_type
    {
      enum
      {
        UNKNOWN = 0xFFFFFFFF,
        value = 
          etl::is_same<T, T1>::value ? T1ID :
          etl::is_same<T, T2>::value ? T2ID :
          etl::is_same<T, T3>::value ? T3ID :
          UNKNOWN
      };
    };
  };

  //***************************************************************************
  // Specialisation for 2 types.
  //***************************************************************************
  template <const size_t T1ID, typename T1,
            const size_t T2ID, typename T2>
  struct type_lookup<T1ID, T1, T2ID, T2, 0, void, 0, void, 0, void, 0, void, 0, void, 0, void, 0, void, 
                     0, void, 0, void, 0, void, 0, void, 0, void, 0, void, 0, void>
  {
    //************************************
    template <size_t ID>
    struct type_from_id
    {
      typedef 
            typename etl::conditional<ID == T1ID,  T1,
            typename etl::conditional<ID == T2ID,  T2,
            void>::type>::type type;
      };

    //************************************
    template <typename T>
    struct id_from_type
    {
      enum
      {
        UNKNOWN = 0xFFFFFFFF,
        value = 
          etl::is_same<T, T1>::value ? T1ID :
          etl::is_same<T, T2>::value ? T2ID :
          UNKNOWN
      };
    };
  };

  //***************************************************************************
  // Specialisation for 1 type.
  //***************************************************************************
  template <const size_t T1ID, typename T1,
            const size_t T1ID, typename T1>
  struct type_lookup<T1ID, T1, 0, void, 0, void, 0, void, 0, void, 0, void, 0, void, 0, void, 0, void, 
                     0, void, 0, void, 0, void, 0, void, 0, void, 0, void, 0, void>
  {
    //************************************
    template <size_t ID>
    struct type_from_id
    {
      typedef 
            typename etl::conditional<ID == T1ID,  T1,
            void>::type type;
      };

    //************************************
    template <typename T>
    struct id_from_type
    {
      enum
      {
        UNKNOWN = 0xFFFFFFFF,
        value = 
          etl::is_same<T, T1>::value ? T1ID :
          UNKNOWN
      };
    };
  };
}

#undef ETL_FILE

#endif
