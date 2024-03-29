#ifndef JNN01_H
#define JNN01_H

#include "flipper.h"

#define TAG "jnn-app"

/* App Scenes */
typedef enum { JnnAppScene_MainMenu, JnnAppScene_Popup1, JnnAppScene_count } JnnAppScene;

/* App Views */
typedef enum { JnnAppView_Menu, JnnAppView_Popup } JnnAppView;

/* App Context */
typedef struct {
    SceneManager* scene_manager;
    ViewDispatcher* view_dispatcher;
    Menu* menu;
    Popup* popup;
} JnnApp;

/* custom events */
typedef enum { JnnAppEvent_ShowPopup1 } JnnAppEvent;

/* main menu scene */

/* indecies for menu items */
typedef enum { JnnAppMenuSelection_One } JnnAppMenuSelection;

#endif