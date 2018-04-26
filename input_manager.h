#ifndef INPUT_MANAGER
#define INPUT_MANAGER

#include <cstdint>
#include <map>
#include <SDL2/SDL.h>

using namespace std;

// SDL keys mappings //
enum
{
    K_UNKNOWN = SDLK_UNKNOWN,
    K_RETURN = SDLK_RETURN,
    K_ESCAPE = SDLK_ESCAPE,
    K_BACKSPACE = SDLK_BACKSPACE,
    K_TAB = SDLK_TAB,
    K_SPACE = SDLK_SPACE,
    K_EXCLAIM = SDLK_EXCLAIM,
    K_QUOTEDBL = SDLK_QUOTEDBL,
    K_HASH = SDLK_HASH,
    K_PERCENT = SDLK_PERCENT,
    K_DOLLAR = SDLK_DOLLAR,
    K_AMPERSAND = SDLK_AMPERSAND,
    K_QUOTE = SDLK_QUOTE,
    K_LEFTPAREN = SDLK_LEFTPAREN,
    K_RIGHTPAREN = SDLK_RIGHTPAREN,
    K_ASTERISK = SDLK_ASTERISK,
    K_PLUS = SDLK_PLUS,
    K_COMMA = SDLK_COMMA,
    K_MINUS = SDLK_MINUS,
    K_PERIOD = SDLK_PERIOD,
    K_SLASH = SDLK_SLASH,
    K_0 = SDLK_0,
    K_1 = SDLK_1,
    K_2 = SDLK_2,
    K_3 = SDLK_3,
    K_4 = SDLK_4,
    K_5 = SDLK_5,
    K_6 = SDLK_6,
    K_7 = SDLK_7,
    K_8 = SDLK_8,
    K_9 = SDLK_9,
    K_COLON = SDLK_COLON,
    K_SEMICOLON = SDLK_SEMICOLON,
    K_LESS = SDLK_LESS,
    K_EQUALS = SDLK_EQUALS,
    K_GREATER = SDLK_GREATER,
    K_QUESTION = SDLK_QUESTION,
    K_AT = SDLK_AT,
    K_LEFTBRACKET = SDLK_LEFTBRACKET,
    K_BACKSLASH = SDLK_BACKSLASH,
    K_RIGHTBRACKET = SDLK_RIGHTBRACKET,
    K_CARET = SDLK_CARET,
    K_UNDERSCORE = SDLK_UNDERSCORE,
    K_BACKQUOTE = SDLK_BACKQUOTE,
    K_a = SDLK_a,
    K_b = SDLK_b,
    K_c = SDLK_c,
    K_d = SDLK_d,
    K_e = SDLK_e,
    K_f = SDLK_f,
    K_g = SDLK_g,
    K_h = SDLK_h,
    K_i = SDLK_i,
    K_j = SDLK_j,
    K_k = SDLK_k,
    K_l = SDLK_l,
    K_m = SDLK_m,
    K_n = SDLK_n,
    K_o = SDLK_o,
    K_p = SDLK_p,
    K_q = SDLK_q,
    K_r = SDLK_r,
    K_s = SDLK_s,
    K_t = SDLK_t,
    K_u = SDLK_u,
    K_v = SDLK_v,
    K_w = SDLK_w,
    K_x = SDLK_x,
    K_y = SDLK_y,
    K_z = SDLK_z,
    K_CAPSLOCK = SDLK_CAPSLOCK,
    K_F1 = SDLK_F1,
    K_F2 = SDLK_F2,
    K_F3 = SDLK_F3,
    K_F4 = SDLK_F4,
    K_F5 = SDLK_F5,
    K_F6 = SDLK_F6,
    K_F7 = SDLK_F7,
    K_F8 = SDLK_F8,
    K_F9 = SDLK_F9,
    K_F10 = SDLK_F10,
    K_F11 = SDLK_F11,
    K_F12 = SDLK_F12,
    K_PRINTSCREEN = SDLK_PRINTSCREEN,
    K_SCROLLLOCK = SDLK_SCROLLLOCK,
    K_PAUSE = SDLK_PAUSE,
    K_INSERT = SDLK_INSERT,
    K_HOME = SDLK_HOME,
    K_PAGEUP = SDLK_PAGEUP,
    K_DELETE = SDLK_DELETE,
    K_END = SDLK_END,
    K_PAGEDOWN = SDLK_PAGEDOWN,
    K_RIGHT = SDLK_RIGHT,
    K_LEFT = SDLK_LEFT,
    K_DOWN = SDLK_DOWN,
    K_UP = SDLK_UP,
    K_NUMLOCKCLEAR = SDLK_NUMLOCKCLEAR,
    K_KP_DIVIDE = SDLK_KP_DIVIDE,
    K_KP_MULTIPLY = SDLK_KP_MULTIPLY,
    K_KP_MINUS = SDLK_KP_MINUS,
    K_KP_PLUS = SDLK_KP_PLUS,
    K_KP_ENTER = SDLK_KP_ENTER,
    K_KP_1 = SDLK_KP_1,
    K_KP_2 = SDLK_KP_2,
    K_KP_3 = SDLK_KP_3,
    K_KP_4 = SDLK_KP_4,
    K_KP_5 = SDLK_KP_5,
    K_KP_6 = SDLK_KP_6,
    K_KP_7 = SDLK_KP_7,
    K_KP_8 = SDLK_KP_8,
    K_KP_9 = SDLK_KP_9,
    K_KP_0 = SDLK_KP_0,
    K_KP_PERIOD = SDLK_KP_PERIOD,
    K_APPLICATION = SDLK_APPLICATION,
    K_POWER = SDLK_POWER,
    K_KP_EQUALS = SDLK_KP_EQUALS,
    K_F13 = SDLK_F13,
    K_F14 = SDLK_F14,
    K_F15 = SDLK_F15,
    K_F16 = SDLK_F16,
    K_F17 = SDLK_F17,
    K_F18 = SDLK_F18,
    K_F19 = SDLK_F19,
    K_F20 = SDLK_F20,
    K_F21 = SDLK_F21,
    K_F22 = SDLK_F22,
    K_F23 = SDLK_F23,
    K_F24 = SDLK_F24,
    K_EXECUTE = SDLK_EXECUTE,
    K_HELP = SDLK_HELP,
    K_MENU = SDLK_MENU,
    K_SELECT = SDLK_SELECT,
    K_STOP = SDLK_STOP,
    K_AGAIN = SDLK_AGAIN,
    K_UNDO = SDLK_UNDO,
    K_CUT = SDLK_CUT,
    K_COPY = SDLK_COPY,
    K_PASTE = SDLK_PASTE,
    K_FIND = SDLK_FIND,
    K_MUTE = SDLK_MUTE,
    K_VOLUMEUP = SDLK_VOLUMEUP,
    K_VOLUMEDOWN = SDLK_VOLUMEDOWN,
    K_KP_COMMA = SDLK_KP_COMMA,
    K_KP_EQUALSAS400 = SDLK_KP_EQUALSAS400,
    K_ALTERASE = SDLK_ALTERASE,
    K_SYSREQ = SDLK_SYSREQ,
    K_CANCEL = SDLK_CANCEL,
    K_CLEAR = SDLK_CLEAR,
    K_PRIOR = SDLK_PRIOR,
    K_RETURN2 = SDLK_RETURN2,
    K_SEPARATOR = SDLK_SEPARATOR,
    K_OUT = SDLK_OUT,
    K_OPER = SDLK_OPER,
    K_CLEARAGAIN = SDLK_CLEARAGAIN,
    K_CRSEL = SDLK_CRSEL,
    K_EXSEL = SDLK_EXSEL,
    K_KP_00 = SDLK_KP_00,
    K_KP_000 = SDLK_KP_000,
    K_THOUSANDSSEPARATOR = SDLK_THOUSANDSSEPARATOR,
    K_DECIMALSEPARATOR = SDLK_DECIMALSEPARATOR,
    K_CURRENCYUNIT = SDLK_CURRENCYUNIT,
    K_CURRENCYSUBUNIT = SDLK_CURRENCYSUBUNIT,
    K_KP_LEFTPAREN = SDLK_KP_LEFTPAREN,
    K_KP_RIGHTPAREN = SDLK_KP_RIGHTPAREN,
    K_KP_LEFTBRACE = SDLK_KP_LEFTBRACE,
    K_KP_RIGHTBRACE = SDLK_KP_RIGHTBRACE,
    K_KP_TAB = SDLK_KP_TAB,
    K_KP_BACKSPACE = SDLK_KP_BACKSPACE,
    K_KP_A = SDLK_KP_A,
    K_KP_B = SDLK_KP_B,
    K_KP_C = SDLK_KP_C,
    K_KP_D = SDLK_KP_D,
    K_KP_E = SDLK_KP_E,
    K_KP_F = SDLK_KP_F,
    K_KP_XOR = SDLK_KP_XOR,
    K_KP_POWER = SDLK_KP_POWER,
    K_KP_PERCENT = SDLK_KP_PERCENT,
    K_KP_LESS = SDLK_KP_LESS,
    K_KP_GREATER = SDLK_KP_GREATER,
    K_KP_AMPERSAND = SDLK_KP_AMPERSAND,
    K_KP_DBLAMPERSAND = SDLK_KP_DBLAMPERSAND,
    K_KP_VERTICALBAR = SDLK_KP_VERTICALBAR,
    K_KP_DBLVERTICALBAR = SDLK_KP_DBLVERTICALBAR,
    K_KP_COLON = SDLK_KP_COLON,
    K_KP_HASH = SDLK_KP_HASH,
    K_KP_SPACE = SDLK_KP_SPACE,
    K_KP_AT = SDLK_KP_AT,
    K_KP_EXCLAM = SDLK_KP_EXCLAM,
    K_KP_MEMSTORE = SDLK_KP_MEMSTORE,
    K_KP_MEMRECALL = SDLK_KP_MEMRECALL,
    K_KP_MEMCLEAR = SDLK_KP_MEMCLEAR,
    K_KP_MEMADD = SDLK_KP_MEMADD,
    K_KP_MEMSUBTRACT = SDLK_KP_MEMSUBTRACT,
    K_KP_MEMMULTIPLY = SDLK_KP_MEMMULTIPLY,
    K_KP_MEMDIVIDE = SDLK_KP_MEMDIVIDE,
    K_KP_PLUSMINUS = SDLK_KP_PLUSMINUS,
    K_KP_CLEAR = SDLK_KP_CLEAR,
    K_KP_CLEARENTRY = SDLK_KP_CLEARENTRY,
    K_KP_BINARY = SDLK_KP_BINARY,
    K_KP_OCTAL = SDLK_KP_OCTAL,
    K_KP_DECIMAL = SDLK_KP_DECIMAL,
    K_KP_HEXADECIMAL = SDLK_KP_HEXADECIMAL,
    K_LCTRL = SDLK_LCTRL,
    K_LSHIFT = SDLK_LSHIFT,
    K_LALT = SDLK_LALT,
    K_LGUI = SDLK_LGUI,
    K_RCTRL = SDLK_RCTRL,
    K_RSHIFT = SDLK_RSHIFT,
    K_RALT = SDLK_RALT,
    K_RGUI = SDLK_RGUI,
    K_MODE = SDLK_MODE,
    K_AUDIONEXT = SDLK_AUDIONEXT,
    K_AUDIOPREV = SDLK_AUDIOPREV,
    K_AUDIOSTOP = SDLK_AUDIOSTOP,
    K_AUDIOPLAY = SDLK_AUDIOPLAY,
    K_AUDIOMUTE = SDLK_AUDIOMUTE,
    K_MEDIASELECT = SDLK_MEDIASELECT,
    K_WWW = SDLK_WWW,
    K_MAIL = SDLK_MAIL,
    K_CALCULATOR = SDLK_CALCULATOR,
    K_COMPUTER = SDLK_COMPUTER,
    K_AC_SEARCH = SDLK_AC_SEARCH,
    K_AC_HOME = SDLK_AC_HOME,
    K_AC_BACK = SDLK_AC_BACK,
    K_AC_FORWARD = SDLK_AC_FORWARD,
    K_AC_STOP = SDLK_AC_STOP,
    K_AC_REFRESH = SDLK_AC_REFRESH,
    K_AC_BOOKMARKS = SDLK_AC_BOOKMARKS,
    K_BRIGHTNESSDOWN = SDLK_BRIGHTNESSDOWN,
    K_BRIGHTNESSUP = SDLK_BRIGHTNESSUP,
    K_DISPLAYSWITCH = SDLK_DISPLAYSWITCH,
    K_KBDILLUMTOGGLE = SDLK_KBDILLUMTOGGLE,
    K_KBDILLUMDOWN = SDLK_KBDILLUMDOWN,
    K_KBDILLUMUP = SDLK_KBDILLUMUP,
    K_EJECT = SDLK_EJECT,
    K_SLEEP = SDLK_SLEEP,
};

class InputManager
{
  public:
    InputManager();
    ~InputManager() {}
    bool Update();
    bool isKeyPressed(uint32_t key);
    bool isQuitRequested();

  private:
    void SetKey(uint32_t key);
    void ResetKey(uint32_t key);
    bool mQuit;
    map<int, bool> mKeys;
};

#endif
