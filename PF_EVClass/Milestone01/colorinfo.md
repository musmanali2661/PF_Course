To display colored text in C, the most common and portable method on modern systems (especially Linux and macOS terminals, and increasingly Windows terminals) is by using **ANSI escape codes**.

Here's a breakdown of how it works and how to implement it:

## 🌈 Using ANSI Escape Codes

ANSI escape codes are sequences of characters that you print to the terminal, which the terminal interprets as commands to change the text's color, style (bold, underline), or position, rather than displaying them as text.

The general structure of the escape code is:
$$\text{\Esc}[ \text{Ps};...;\text{Pt}\text{m}$$

Where:

  * $\text{\Esc}$ represents the **escape character** (ASCII code 27 or $\text{\verb|\033|}$ in C).
  * $[$ is the **Control Sequence Introducer (CSI)**.
  * $\text{Ps}$ are **Parameter Separators** (semicolons).
  * $\text{Pt}$ are **Parameters** (the color/style codes).
  * $\text{m}$ is the command to **Set Graphics Rendition**.

### Essential Color Codes

You usually combine a style, a foreground color, and sometimes a background color, separated by semicolons.

| Type | Code (Ps) | Description |
| :--- | :--- | :--- |
| **Reset** | 0 | Resets all attributes (color and style) to default. **Always use this at the end\!** |
| **Style** | 1 | Bold/Bright text |
| **Foreground** | 30-37 | Standard 8 colors |
| **Background** | 40-47 | Standard 8 colors |

#### Standard 8 Colors (30-37 for foreground)

| Color | Code (Ps) |
| :--- | :--- |
| Black | 30 |
| Red | 31 |
| Green | 32 |
| Yellow | 33 |
| Blue | 34 |
| Magenta | 35 |
| Cyan | 36 |
| White | 37 |

### 💻 Example Code

Here is a C example using the codes:

```c
#include <stdio.h>

// Define common ANSI color codes for readability
#define ANSI_COLOR_RED      "\x1b[31m"
#define ANSI_COLOR_GREEN    "\x1b[32m"
#define ANSI_COLOR_YELLOW   "\x1b[33m"
#define ANSI_COLOR_BLUE     "\x1b[34m"
#define ANSI_COLOR_MAGENTA  "\x1b[35m"
#define ANSI_COLOR_CYAN     "\x1b[36m"
#define ANSI_COLOR_RESET    "\x1b[0m"
#define ANSI_BOLD           "\x1b[1m"
#define ANSI_BG_BLUE        "\x1b[44m"


int main() {
    // 1. Simple Red text
    printf(ANSI_COLOR_RED "This text is red." ANSI_COLOR_RESET "\n");

    // 2. Bold Green text
    printf(ANSI_BOLD ANSI_COLOR_GREEN "This text is bold and green." ANSI_COLOR_RESET "\n");

    // 3. Yellow text on a Blue background
    printf(ANSI_BG_BLUE ANSI_COLOR_YELLOW "Yellow text on blue background." ANSI_COLOR_RESET "\n");

    // 4. Resetting is crucial to not color the rest of the terminal output
    printf("This text is back to default color.\n");

    return 0;
}
```

-----

## ⚠️ Important Considerations

1.  **Portability:** ANSI escape codes work best on **Linux/Unix/macOS** terminals.
      * **Windows:** Modern Windows Terminal (and the newer Console Host) supports ANSI codes by default. If running in an older, traditional `cmd.exe` or PowerShell console, you might need to enable support by calling a specific Windows API function, or the codes might not work at all.
2.  **The Reset Code:** **Always** use the $\text{\verb|\x1b[0m|}$ or $\text{ANSI\_COLOR\_RESET}$ code at the end of your colored string. If you don't, all subsequent text printed to the terminal will continue to use the last color/style you set.
3.  **Advanced Colors:** You can use **256 colors** (using the code $\text{\verb|38;5;|}$) and **True Color (16 million colors)** (using the code $\text{\verb|38;2;R;G;B;|}$) in terminals that support them, but this is less portable than the standard 8 colors.

Would you like to see an example of how to use **256-color codes** for more specific shading?