#include "OpenGLESApplication.hpp"
#include "AndroidAssetLoader.hpp"
#include "OpenGL/OpenGLESGraphicsManager.hpp"

namespace My {
    extern GfxConfiguration config;
    IApplication*    g_pApp             = static_cast<IApplication*>(new OpenGLESApplication(config));
    GraphicsManager* g_pGraphicsManager = static_cast<GraphicsManager*>(new OpenGLESGraphicsManager());
    MemoryManager*   g_pMemoryManager   = static_cast<MemoryManager*>(new MemoryManager());
    AssetLoader*     g_pAssetLoader     = static_cast<AssetLoader*>(new AndroidAssetLoader());
    SceneManager*    g_pSceneManager    = static_cast<SceneManager*>(new SceneManager());
    InputManager*    g_pInputManager    = static_cast<InputManager*>(new InputManager());
    PhysicsManager*  g_pPhysicsManager  = static_cast<PhysicsManager*>(new PhysicsManager);
}

