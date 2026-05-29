/**
 * @brief 终端 ANSI 颜色宏定义
 * @date 2026-05-29
 * @note 需要终端支持 VT/ANSI 转义序列 (Windows 10+ 已默认支持)
 */

#ifndef TERMINAL_COLORS_H
#define TERMINAL_COLORS_H

/* ========== 基础颜色 ========== */
#define COLOR_RESET     "\033[0m"
#define COLOR_BOLD      "\033[1m"
#define COLOR_DIM       "\033[2m"

/* 常规色 */
#define COLOR_BLACK     "\033[30m"
#define COLOR_RED       "\033[31m"
#define COLOR_GREEN     "\033[32m"
#define COLOR_YELLOW    "\033[33m"
#define COLOR_BLUE      "\033[34m"
#define COLOR_MAGENTA   "\033[35m"
#define COLOR_CYAN      "\033[36m"
#define COLOR_WHITE     "\033[37m"

/* 亮色 (加粗) */
#define COLOR_BRED      "\033[1;31m"
#define COLOR_BGREEN    "\033[1;32m"
#define COLOR_BYELLOW   "\033[1;33m"
#define COLOR_BBLUE     "\033[1;34m"
#define COLOR_BMAGENTA  "\033[1;35m"
#define COLOR_BCYAN     "\033[1;36m"
#define COLOR_BWHITE    "\033[1;37m"

/* ========== 语义别名 ========== */
/* 标题 & 分隔线 — 亮青 */
#define C_TITLE         COLOR_BCYAN
#define C_BORDER        COLOR_CYAN

/* 成功 — 亮绿 */
#define C_OK            COLOR_BGREEN

/* 错误 & 警告 — 亮红 / 亮黄 */
#define C_ERR           COLOR_BRED
#define C_WARN          COLOR_BYELLOW

/* 高亮数据 (数字、学号等) — 亮黄 */
#define C_HIGHLIGHT     COLOR_BYELLOW

/* 标签 & 字段名 — 亮品红 */
#define C_LABEL         COLOR_BMAGENTA

/* 数据值 — 亮白 */
#define C_VALUE         COLOR_BWHITE

/* 辅助信息 & 子标题 — 亮蓝 */
#define C_SUBTITLE      COLOR_BBLUE

/* 提示文字 — 灰色 (dim) */
#define C_HINT          COLOR_DIM

#endif /* TERMINAL_COLORS_H */
