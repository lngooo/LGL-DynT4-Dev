import os

# 配置信息 [cite: 3, 7]
FUNCTION_ID = "F38"
FUNCTION_NAME = "ReverseWords"
BASE_DIR = f"../Data/Source_Raw/{FUNCTION_ID}_{FUNCTION_NAME}/"

def generate_files():
    if not os.path.exists(BASE_DIR):
        os.makedirs(BASE_DIR)

    # 定义 21 种差异化实现逻辑 [cite: 15, 16, 17]
    implementations = [
        # --- SEEDS (S) ---
        ("A01_F38_S_TwoPass", "双指针翻转法：先翻转整串，再翻转每个单词",
         """    int len = strlen(s);
    for(int i=0; i<len/2; i++) { char t=s[i]; s[i]=s[len-1-i]; s[len-1-i]=t; }
    int start = 0;
    for(int i=0; i<=len; i++) {
        if(s[i] == ' ' || s[i] == '\\0') {
            for(int j=0; j<(i-start)/2; j++) { char t=s[start+j]; s[start+j]=s[i-1-j]; s[i-1-j]=t; }
            start = i + 1;
        }
    }"""),

        ("A02_F38_S_Recursion", "递归拆解法：递归查找空格并重新拼接",
         """    char *p = strchr(s, ' ');
    if(!p) return;
    char tail[256]; strcpy(tail, p + 1);
    ReverseWords(tail);
    int pos = p - s;
    s[pos] = '\\0';
    char head[256]; strcpy(head, s);
    sprintf(s, "%s %s", tail, head);"""),

        ("A03_F38_S_StackSim", "数组模拟栈：利用单词指针数组逆序重组",
         """    char *words[128]; int count = 0;
    char temp[256]; strcpy(temp, s);
    char *tok = strtok(temp, " ");
    while(tok) { words[count++] = tok; tok = strtok(NULL, " "); }
    s[0] = '\\0';
    for(int i=count-1; i>=0; i--) {
        strcat(s, words[i]);
        if(i > 0) strcat(s, " ");
    }"""),

        ("A04_F38_S_BackScan", "后向扫描法：从末尾向前查找单词并拷贝至缓冲区",
         """    int n = strlen(s); char res[256] = "";
    int end = n;
    for(int i=n-1; i>=-1; i--) {
        if(i == -1 || s[i] == ' ') {
            strncat(res, s + i + 1, end - i - 1);
            if(i != -1) strcat(res, " ");
            end = i;
        }
    }
    strcpy(s, res);"""),

        ("A05_F38_S_PointerWalk", "纯指针偏移法：不使用索引下标完成翻转",
         """    char *e = s; while(*e) e++;
    char *l = s, *r = e - 1;
    while(l < r) { char t = *l; *l++ = *r; *r-- = t; }
    char *word = s;
    for(char *p = s; p <= e; p++) {
        if(*p == ' ' || *p == '\\0') {
            char *wl = word, *wr = p - 1;
            while(wl < wr) { char t = *wl; *wl++ = *wr; *wr-- = t; }
            word = p + 1;
        }
    }"""),

        ("A06_F38_S_InPlaceShift", "原地移动法：利用字符平移覆盖实现",
         """    int n = strlen(s);
    char *buf = (char*)malloc(n + 1);
    int cur = 0;
    for(int i = n-1; i >= 0; i--) {
        if(s[i] == ' ') {
            for(int j=i+1; s[j]!=' ' && s[j]!='\\0'; j++) buf[cur++] = s[j];
            buf[cur++] = ' ';
        }
    }
    for(int j=0; s[j]!=' ' && s[j]!='\\0'; j++) buf[cur++] = s[j];
    buf[cur] = '\\0';
    strcpy(s, buf); free(buf);"""),

        # --- OBFUSCATIONS (O) [cite: 17, 18, 20, 21] ---
        ("A07_F38_O_A01_Goto", "跳转重构：将 A01 的循环拆解为 Goto 标签链",
         """    int len = 0; L_LEN: if(s[len]) { len++; goto L_LEN; }
    int i = 0; L_REV1: if(i < len/2) { char t=s[i]; s[i]=s[len-1-i]; s[len-1-i]=t; i++; goto L_REV1; }
    int start = 0; i = 0;
    L_MAIN: if(i <= len) {
        if(s[i] == ' ' || s[i] == '\\0') {
            int j = 0; 
            L_INNER: if(j < (i-start)/2) { char t=s[start+j]; s[start+j]=s[i-1-j]; s[i-1-j]=t; j++; goto L_INNER; }
            start = i + 1;
        }
        i++; goto L_MAIN;
    }"""),

        ("A08_F38_O_A04_Flattening", "控制流平坦化：基于 A04 引入 Switch 状态机",
         """    int state = 0, i, n = strlen(s), end; char res[256] = "";
    while(state != 99) {
        switch(state) {
            case 0: end = n; i = n - 1; state = 1; break;
            case 1: state = (i >= -1) ? 2 : 4; break;
            case 2: if(i == -1 || s[i] == ' ') {
                        strncat(res, s + i + 1, end - i - 1);
                        if(i != -1) strcat(res, " ");
                        end = i;
                    }
                    state = 3; break;
            case 3: i--; state = 1; break;
            case 4: strcpy(s, res); state = 99; break;
        }
    }"""),

        ("A09_F38_O_A05_Opaque", "虚假控制流：在 A05 中插入不透明谓词",
         """    char *e = s; while(*e) e++;
    if((int)floor(sqrt(16.0)) == 4) {
        char *l = s, *r = e - 1;
        while(l < r) { char t = *l; *l++ = *r; *r-- = t; }
    }
    char *word = s;
    for(char *p = s; p <= e; p++) {
        if(p != NULL) {
            if(*p == ' ' || *p == '\\0') {
                char *wl = word, *wr = p - 1;
                while(wl < wr) { char t = *wl; *wl++ = *wr; *wr-- = t; }
                word = p + 1;
            }
        }
    }"""),

        ("A10_F38_O_A01_VarSplit", "数据流混淆：对 A01 变量进行拆分与冗余化",
         """    int v1 = 0, v2 = 0; while(s[v1+v2]) v1++;
    int total = v1 + v2;
    for(int i=0; i < (total >> 1); i++) {
        char t = s[i];
        int target = total - 1 - i;
        s[i] = s[target];
        s[target] = t;
    }
    int st_idx = 0;
    for(int k=0; k <= total; k++) {
        if((s[k] ^ 32) == 0 || s[k] == 0) {
            int mid = (k - st_idx) / 2;
            for(int m=0; m < mid; m++) {
                char tmp = s[st_idx + m];
                s[st_idx + m] = s[k - 1 - m];
                s[k - 1 - m] = tmp;
            }
            st_idx = k + 1;
        }
    }"""),

        ("A11_F38_O_A03_APIWrap", "指令替换：利用 math 库辅助计算偏移",
         """    char temp[256]; strcpy(temp, s);
    char *stack[64]; int top = 0;
    char *p = strtok(temp, " ");
    while(p) {
        stack[(int)pow(top, 1)] = p;
        top = (int)fmax(top + 1, top);
        p = strtok(NULL, " ");
    }
    s[0] = (char)0;
    for(int j = top - 1; j >= 0; j--) {
        strcat(s, stack[j]);
        if(j > 0) { char space[2] = {32, 0}; strcat(s, space); }
    }"""),

        ("A12_F38_O_A02_TailRec", "尾递归模拟：将 A02 改造为显式辅助函数模拟",
         """    char *space = strrchr(s, ' ');
    if(!space) return;
    int suffix_len = strlen(space + 1);
    char *suffix = (char*)malloc(suffix_len + 1);
    strcpy(suffix, space + 1);
    *space = '\\0';
    ReverseWords(s);
    char *prefix = (char*)malloc(strlen(s) + 1);
    strcpy(prefix, s);
    sprintf(s, "%s %s", suffix, prefix);
    free(suffix); free(prefix);"""),

        ("A13_F38_O_A04_Bitwise", "位运算混淆：在 A04 循环中使用异或替代比较",
         """    int n = strlen(s); char out[256]; memset(out, 0, 256);
    int last = n;
    for(int i = n - 1; i >= -1; i--) {
        int is_space = (i >= 0) ? (s[i] ^ ' ') : -1;
        if(is_space == 0 || i == -1) {
            strncat(out, s + i + 1, last - i - 1);
            if(i != -1) { char sp[2] = {32, 0}; strcat(out, sp); }
            last = i;
        }
    }
    strcpy(s, out);"""),

        ("A14_F38_O_A06_XorSwap", "算法替换：使用 XOR 交换字符实现 A06",
         """    int len = strlen(s);
    char *buf = calloc(len + 1, 1);
    int ptr = 0;
    for(int i = len - 1; i >= 0; i--) {
        if(s[i] == 32) {
            int word_start = i + 1;
            while(s[word_start] != 32 && s[word_start] != 0) buf[ptr++] = s[word_start++];
            buf[ptr++] = 32;
        }
    }
    int first_end = 0; while(s[first_end] != 32 && s[first_end] != 0) buf[ptr++] = s[first_end++];
    buf[ptr] = 0;
    strcpy(s, buf); free(buf);"""),

        ("A15_F38_O_A01_DoublePtr", "深度混淆：基于 A01 的多重指针嵌套",
         """    char **ptr_s = &s;
    int len = strlen(*ptr_s);
    for(int i=0; i < (len >> 1); i++) {
        char t = (*ptr_s)[i];
        (*ptr_s)[i] = (*ptr_s)[len-1-i];
        (*ptr_s)[len-1-i] = t;
    }
    char *walker = *ptr_s;
    int head = 0;
    for(int j=0; j <= len; j++) {
        if(walker[j] == 32 || walker[j] == '\\0') {
            int tail = j - 1;
            while(head < tail) {
                char tmp = walker[head];
                walker[head++] = walker[tail];
                walker[tail--] = tmp;
            }
            head = j + 1;
        }
    }"""),

        ("A16_F38_O_A05_DeadLoop", "虚假控制流：在 A05 内部嵌入永不执行的死循环",
         """    char *end_ptr = s; while(*end_ptr) end_ptr++;
    char *a = s, *b = end_ptr - 1;
    while(a < b) { char t = *a; *a++ = *b; *b-- = t; }
    if(0) { for(int k=0; k<100; k++) printf("Unreachable"); }
    char *word_ptr = s;
    for(char *run = s; run <= end_ptr; run++) {
        if(*run == 32 || *run == 0) {
            char *sub_l = word_ptr, *sub_r = run - 1;
            while(sub_l < sub_r) { char tmp = *sub_l; *sub_l++ = *sub_r; *sub_r-- = tmp; }
            word_ptr = run + 1;
        }
    }"""),

        ("A17_F38_O_A03_LogicSplit", "逻辑拆分：将 A03 的 Token 提取与重组分离",
         """    char base[256]; strcpy(base, s);
    char *arr[100]; int n = 0;
    char *p = strtok(base, " ");
    do {
        if(p) arr[n++] = p;
    } while((p = strtok(NULL, " ")));
    s[0] = 0;
    while(n > 0) {
        strcat(s, arr[--n]);
        if(n > 0) strcat(s, " ");
    }"""),

        ("A18_F38_O_A04_StructSim", "数据结构化：使用结构体封装单词索引模拟 A04",
         """    struct Word { int start; int len; } words[64];
    int count = 0, n = strlen(s), last = 0;
    for(int i=0; i<=n; i++) {
        if(s[i] == ' ' || s[i] == 0) {
            words[count].start = last;
            words[count++].len = i - last;
            last = i + 1;
        }
    }
    char buf[256] = "";
    for(int j=count-1; j>=0; j--) {
        strncat(buf, s + words[j].start, words[j].len);
        if(j > 0) strcat(buf, " ");
    }
    strcpy(s, buf);"""),

        ("A19_F38_O_A01_StepMod", "循环步长混淆：修改 A01 的翻转步长逻辑",
         """    int n = 0; while(s[n]) n++;
    for(int i=0; i < n/2; i+=1) {
        char t = s[i]; s[i] = s[n-1-i]; s[n-1-i] = t;
    }
    int cur = 0;
    while(cur < n) {
        int next = cur;
        while(s[next] != ' ' && s[next] != 0) next++;
        for(int k=0; k < (next-cur)/2; k++) {
            char tmp = s[cur+k];
            s[cur+k] = s[next-1-k];
            s[next-1-k] = tmp;
        }
        cur = next + 1;
    }"""),

        ("A20_F38_O_A02_RecursivePointer", "递归指针偏移：基于 A02 的指针版递归",
         """    char *space = strchr(s, ' ');
    if (space) {
        char temp[256];
        strcpy(temp, space + 1);
        ReverseWords(temp);
        int len = space - s;
        char first[256]; strncpy(first, s, len); first[len] = '\\0';
        sprintf(s, "%s %s", temp, first);
    }"""),

        ("A21_F38_O_A05_ManualCopy", "手动拷贝混淆：不使用 string.h 函数实现 A05",
         """    char *e = s; while(*e) e++;
    int len = e - s;
    for(int i=0; i<len/2; i++) { char t=s[i]; s[i]=s[len-1-i]; s[len-1-i]=t; }
    char *w = s;
    for(char *curr = s; ; curr++) {
        if(*curr == ' ' || *curr == '\\0') {
            char *l = w, *r = curr - 1;
            while(l < r) { char t = *l; *l++ = *r; *r-- = t; }
            w = curr + 1;
            if(*curr == '\\0') break;
        }
    }""")
    ]

    # 注释头模板 [cite: 9]
    header_template = """/**
 * LGL-DynT4 Dataset - Function: {func_name}
 * -----------------------------------------
 * File: {filename}.c
 * Implementation Logic: {logic}
 * Input Format: <string>
 */
"""

    # Main 函数模板 (逐字符一致) [cite: 6]
    main_code = """
int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    char buffer[512] = "";
    for(int i = 1; i < argc; i++) {
        strcat(buffer, argv[i]);
        if(i < argc - 1) strcat(buffer, " ");
    }
    ReverseWords(buffer);
    printf("%s\\n", buffer);
    return 0;
}
"""

    for filename, logic, body in implementations:
        full_path = os.path.join(BASE_DIR, filename + ".c")
        with open(full_path, "w", encoding="utf-8") as f:
            f.write(header_template.format(func_name=FUNCTION_NAME, filename=filename, logic=logic))
            f.write("#include <stdio.h>\n#include <string.h>\n#include <math.h>\n#include <stdlib.h>\n\n")
            f.write(f"void {FUNCTION_NAME}(char *s) {{\n{body}\n}}\n")
            f.write(main_code)

    print(f"成功生成 21 个文件至: {BASE_DIR}")

if __name__ == "__main__":
    generate_files()