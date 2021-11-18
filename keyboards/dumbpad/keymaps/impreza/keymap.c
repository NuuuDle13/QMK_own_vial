#include QMK_KEYBOARD_H            

#define _BASE 0
#define _FUNC 1
#define _MEDIA 2
#define _RGB 3
                                                                                                                                                                        
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {  

	[_BASE] = LAYOUT(KC_7, 	  KC_8,  KC_9, 	  TG(_FUNC), 
					 KC_4, 	  KC_5,  KC_6, 	  TG(_MEDIA), 
					 KC_1, 	  KC_2,  KC_3, 	  TG(_RGB), 
			KC_BTN1, KC_LSFT, KC_P0, KC_COMM, KC_DOT),         
        
	[_FUNC] = LAYOUT(KC_MNXT, KC_MPLY, KC_MFFD, KC_TRNS, 
					 KC_MPRV, KC_MSTP, KC_MRWD, KC_F13, 
					 KC_WFWD, KC_UP,   KC_WFWD, KC_F14, 
			KC_MUTE, KC_LEFT, KC_DOWN, KC_RGHT, KC_F15),                                  
        
	[_MEDIA] = LAYOUT(KC_PGUP, KC_INS,  KC_HOME, KC_TRNS, 
					  KC_PGDN, KC_DEL,  KC_END,  KC_TRNS, 
					  KC_BTN1, KC_MS_U, KC_BTN2, KC_WH_U, 
			 KC_BTN3, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D),                                
        
	[_RGB] = LAYOUT(KC_TRNS,  RGB_HUI, RGB_VAI, KC_TRNS, 
					KC_TRNS,  RGB_HUD, RGB_VAD, KC_TRNS, 
					RGB_SAI,  RGB_SPI, KC_NO,   KC_TRNS, 
		   RGB_TOG, RGB_SAD,  RGB_SPD, KC_NO,   RESET)
		
		};                                 
                                                                                                                                                                                                           
                                                                                                                                                                                                           
<<<<<<< HEAD
//bool encoder_update_user(uint8_t index, bool clockwise) {                                                                                                                                                  
 //   if (index == 0) {                                                                                                                                                                                      
  //      switch (get_highest_layer(layer_state)) {                                                                                                                                                          
         //   case _BASE:                                                                                                                                                                                        
             //   if (clockwise) {                                                                                                                                                                           
             //       tap_code(KC_MS_R);                                                                                                                                                                     
           //     } else {                                                                                                                                                                                   
              //      tap_code(KC_MS_L);                                                                                                                                                                     
            //    }                                                                                                                                                                                          
          //      break;                                                                                                                                                                                     
                                                                                                                                                                                                           
        //    case _MEDIA:                                                                                                                                                                                       
             //   if (clockwise) {                                                                                                                                                                           
                //    tap_code(KC_VOLU);                                                                                                                                                                      
              //  } else {                                                                                                                                                                                   
              //      tap_code(KC_VOLD);                                                                                                                                                                     
            //    }                                                                                                                                                                                          
            //    break;  
				
          //  case _FUNC:                                                                                                                                                                                       
             //   if (clockwise) {                                                                                                                                                                           
               //     tap_code(KC_MS_L);                                                                                                                                                                      
             //   } else {                                                                                                                                                                                   
              //      tap_code(KC_MS_R);                                                                                                                                                                     
            //    }                                                                                                                                                                                          
          //      break; 	
				
        //    case _RGB:                                                                                                                                                                                       
            //    if (clockwise) {                                                                                                                                                                           
          //          tap_code16(RGB_MOD);                                                                                                                                                                      
        //        } else {                                                                                                                                                                                   
      //              tap_code16(RGB_RMOD);                                                                                                                                                                     
    //            }                                                                                                                                                                                          
  //              break;			
//        }                                                                                                                                                                                                  
  //  }                                                                                                                                                                                                      
  //  return true;                                                                                                                                                                                           
//}                      

                                                                                                                                                                                    
                                                                                                                                                                                                           
=======
bool encoder_update_user(uint8_t index, bool clockwise) {                                                                                                                                                  
    if (index == 0) {                                                                                                                                                                                      
        switch (get_highest_layer(layer_state)) {                                                                                                                                                          
            case _BASE:                                                                                                                                                                                        
                if (clockwise) {                                                                                                                                                                           
                    tap_code(KC_MS_R);                                                                                                                                                                     
                } else {                                                                                                                                                                                   
                    tap_code(KC_MS_L);                                                                                                                                                                     
                }                                                                                                                                                                                          
                break;                                                                                                                                                                                     
                                                                                                                                                                                                           
            case _MEDIA:                                                                                                                                                                                       
                if (clockwise) {                                                                                                                                                                           
                    tap_code(KC_VOLU);                                                                                                                                                                      
                } else {                                                                                                                                                                                   
                    tap_code(KC_VOLD);                                                                                                                                                                     
                }                                                                                                                                                                                          
                break;  
				
            case _FUNC:                                                                                                                                                                                       
                if (clockwise) {                                                                                                                                                                           
                    tap_code(KC_MS_L);                                                                                                                                                                      
                } else {                                                                                                                                                                                   
                    tap_code(KC_MS_R);                                                                                                                                                                     
                }                                                                                                                                                                                          
                break; 	
				
            case _RGB:                                                                                                                                                                                       
                if (clockwise) {                                                                                                                                                                           
                    tap_code16(RGB_MOD);                                                                                                                                                                      
                } else {                                                                                                                                                                                   
                    tap_code16(RGB_RMOD);                                                                                                                                                                     
                }                                                                                                                                                                                          
                break;			
        }                                                                                                                                                                                                  
    }                                                                                                                                                                                                      
    return true;                                                                                                                                                                                           
}                      

                                                                                                                                                                                    
                                                                                                                                                                                                           
>>>>>>> b3e8a056a72edd2ec49417562cbf992e865ab865
