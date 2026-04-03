define dso_local void @ArrayRotate(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  %12 = alloca i32
  %13 = alloca i32
  %14 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  %15 = load i32, i32* %5
  %16 = icmp eq i32 %15, 0
  br i1 %16, label %17, label %18
17:
  br label %195
18:
  %19 = load i32, i32* %6
  %20 = load i32, i32* %5
  %21 = srem i32 %19, %20
  store i32 %21, i32* %6
  %22 = load i32, i32* %6
  %23 = icmp eq i32 %22, 0
  br i1 %23, label %24, label %25
24:
  br label %195
25:
  %27 = load i32, i32* %6
  store i32 %27, i32* %7
  %29 = load i32, i32* %5
  %30 = load i32, i32* %6
  %31 = sub nsw i32 %29, %30
  store i32 %31, i32* %8
  br label %32
32:
  %33 = load i32, i32* %7
  %34 = load i32, i32* %8
  %35 = icmp ne i32 %33, %34
  br i1 %35, label %36, label %147
36:
  %37 = load i32, i32* %7
  %38 = load i32, i32* %8
  %39 = icmp slt i32 %37, %38
  br i1 %39, label %40, label %97
40:
  store i32 0, i32* %9
  br label %42
42:
  %43 = load i32, i32* %9
  %44 = load i32, i32* %7
  %45 = icmp slt i32 %43, %44
  br i1 %45, label %48, label %46
46:
  br label %93
48:
  %50 = load i32*, i32** %4
  %51 = load i32, i32* %6
  %52 = load i32, i32* %7
  %53 = sub nsw i32 %51, %52
  %54 = load i32, i32* %9
  %55 = add nsw i32 %53, %54
  %56 = sext i32 %55 to i64
  %57 = getelementptr inbounds i32, i32* %50, i64 %56
  %58 = load i32, i32* %57
  store i32 %58, i32* %10
  %59 = load i32*, i32** %4
  %60 = load i32, i32* %6
  %61 = load i32, i32* %8
  %62 = add nsw i32 %60, %61
  %63 = load i32, i32* %7
  %64 = sub nsw i32 %62, %63
  %65 = load i32, i32* %9
  %66 = add nsw i32 %64, %65
  %67 = sext i32 %66 to i64
  %68 = getelementptr inbounds i32, i32* %59, i64 %67
  %69 = load i32, i32* %68
  %70 = load i32*, i32** %4
  %71 = load i32, i32* %6
  %72 = load i32, i32* %7
  %73 = sub nsw i32 %71, %72
  %74 = load i32, i32* %9
  %75 = add nsw i32 %73, %74
  %76 = sext i32 %75 to i64
  %77 = getelementptr inbounds i32, i32* %70, i64 %76
  store i32 %69, i32* %77
  %78 = load i32, i32* %10
  %79 = load i32*, i32** %4
  %80 = load i32, i32* %6
  %81 = load i32, i32* %8
  %82 = add nsw i32 %80, %81
  %83 = load i32, i32* %7
  %84 = sub nsw i32 %82, %83
  %85 = load i32, i32* %9
  %86 = add nsw i32 %84, %85
  %87 = sext i32 %86 to i64
  %88 = getelementptr inbounds i32, i32* %79, i64 %87
  store i32 %78, i32* %88
  br label %90
90:
  %91 = load i32, i32* %9
  %92 = add nsw i32 %91, 1
  store i32 %92, i32* %9
  br label %42
93:
  %94 = load i32, i32* %7
  %95 = load i32, i32* %8
  %96 = sub nsw i32 %95, %94
  store i32 %96, i32* %8
  br label %146
97:
  store i32 0, i32* %11
  br label %99
99:
  %100 = load i32, i32* %11
  %101 = load i32, i32* %8
  %102 = icmp slt i32 %100, %101
  br i1 %102, label %105, label %103
103:
  br label %142
105:
  %107 = load i32*, i32** %4
  %108 = load i32, i32* %6
  %109 = load i32, i32* %7
  %110 = sub nsw i32 %108, %109
  %111 = load i32, i32* %11
  %112 = add nsw i32 %110, %111
  %113 = sext i32 %112 to i64
  %114 = getelementptr inbounds i32, i32* %107, i64 %113
  %115 = load i32, i32* %114
  store i32 %115, i32* %12
  %116 = load i32*, i32** %4
  %117 = load i32, i32* %6
  %118 = load i32, i32* %11
  %119 = add nsw i32 %117, %118
  %120 = sext i32 %119 to i64
  %121 = getelementptr inbounds i32, i32* %116, i64 %120
  %122 = load i32, i32* %121
  %123 = load i32*, i32** %4
  %124 = load i32, i32* %6
  %125 = load i32, i32* %7
  %126 = sub nsw i32 %124, %125
  %127 = load i32, i32* %11
  %128 = add nsw i32 %126, %127
  %129 = sext i32 %128 to i64
  %130 = getelementptr inbounds i32, i32* %123, i64 %129
  store i32 %122, i32* %130
  %131 = load i32, i32* %12
  %132 = load i32*, i32** %4
  %133 = load i32, i32* %6
  %134 = load i32, i32* %11
  %135 = add nsw i32 %133, %134
  %136 = sext i32 %135 to i64
  %137 = getelementptr inbounds i32, i32* %132, i64 %136
  store i32 %131, i32* %137
  br label %139
139:
  %140 = load i32, i32* %11
  %141 = add nsw i32 %140, 1
  store i32 %141, i32* %11
  br label %99
142:
  %143 = load i32, i32* %8
  %144 = load i32, i32* %7
  %145 = sub nsw i32 %144, %143
  store i32 %145, i32* %7
  br label %146
146:
  br label %32
147:
  store i32 0, i32* %13
  br label %149
149:
  %150 = load i32, i32* %13
  %151 = load i32, i32* %7
  %152 = icmp slt i32 %150, %151
  br i1 %152, label %155, label %153
153:
  br label %192
155:
  %157 = load i32*, i32** %4
  %158 = load i32, i32* %6
  %159 = load i32, i32* %7
  %160 = sub nsw i32 %158, %159
  %161 = load i32, i32* %13
  %162 = add nsw i32 %160, %161
  %163 = sext i32 %162 to i64
  %164 = getelementptr inbounds i32, i32* %157, i64 %163
  %165 = load i32, i32* %164
  store i32 %165, i32* %14
  %166 = load i32*, i32** %4
  %167 = load i32, i32* %6
  %168 = load i32, i32* %13
  %169 = add nsw i32 %167, %168
  %170 = sext i32 %169 to i64
  %171 = getelementptr inbounds i32, i32* %166, i64 %170
  %172 = load i32, i32* %171
  %173 = load i32*, i32** %4
  %174 = load i32, i32* %6
  %175 = load i32, i32* %7
  %176 = sub nsw i32 %174, %175
  %177 = load i32, i32* %13
  %178 = add nsw i32 %176, %177
  %179 = sext i32 %178 to i64
  %180 = getelementptr inbounds i32, i32* %173, i64 %179
  store i32 %172, i32* %180
  %181 = load i32, i32* %14
  %182 = load i32*, i32** %4
  %183 = load i32, i32* %6
  %184 = load i32, i32* %13
  %185 = add nsw i32 %183, %184
  %186 = sext i32 %185 to i64
  %187 = getelementptr inbounds i32, i32* %182, i64 %186
  store i32 %181, i32* %187
  br label %189
189:
  %190 = load i32, i32* %13
  %191 = add nsw i32 %190, 1
  store i32 %191, i32* %13
  br label %149
192:
  br label %195
195:
  ret void
}
