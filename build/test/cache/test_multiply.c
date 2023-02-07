#include "src/multiply.h"
#include "C:/Ruby30-x64/lib/ruby/gems/3.0.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"






void setUp(void){};

void tearDown(void){};





void test_do_multiply(void){

   int result;





   result = multiply(2,3);





   UnityAssertEqualNumber((UNITY_INT)((6)), (UNITY_INT)((result)), (

  ((void *)0)

  ), (UNITY_UINT)(17), UNITY_DISPLAY_STYLE_INT);

}
