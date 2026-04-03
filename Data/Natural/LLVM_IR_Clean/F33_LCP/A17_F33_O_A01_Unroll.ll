define dso_local void @LCP(i8** %0, i32 %1, i8* %2) {
  %4 = alloca i8**
  %5 = alloca i32
  %6 = alloca i8*
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  %12 = alloca i32
  store i8** %0, i8*** %4
  store i32 %1, i32* %5
  store i8* %2, i8** %6
  store i32 0, i32* %7
  br label %14
14:
  %15 = load i8**, i8*** %4
  %16 = getelementptr inbounds i8*, i8** %15, i64 0
  %17 = load i8*, i8** %16
  %18 = load i32, i32* %7
  %19 = sext i32 %18 to i64
  %20 = getelementptr inbounds i8, i8* %17, i64 %19
  %21 = load i8, i8* %20
  %22 = sext i8 %21 to i32
  %23 = icmp ne i32 %22, 0
  br i1 %23, label %24, label %35
24:
  %25 = load i8**, i8*** %4
  %26 = getelementptr inbounds i8*, i8** %25, i64 0
  %27 = load i8*, i8** %26
  %28 = load i32, i32* %7
  %29 = add nsw i32 %28, 1
  %30 = sext i32 %29 to i64
  %31 = getelementptr inbounds i8, i8* %27, i64 %30
  %32 = load i8, i8* %31
  %33 = sext i8 %32 to i32
  %34 = icmp ne i32 %33, 0
  br label %35
35:
  %36 = phi i1 [ false, %14 ], [ %34, %24 ]
  br i1 %36, label %37, label %130
37:
  store i32 1, i32* %8
  store i32 1, i32* %9
  br label %40
40:
  %41 = load i32, i32* %9
  %42 = load i32, i32* %5
  %43 = icmp slt i32 %41, %42
  br i1 %43, label %45, label %44
44:
  store i32 4, i32* %10
  br label %92
45:
  %46 = load i8**, i8*** %4
  %47 = load i32, i32* %9
  %48 = sext i32 %47 to i64
  %49 = getelementptr inbounds i8*, i8** %46, i64 %48
  %50 = load i8*, i8** %49
  %51 = load i32, i32* %7
  %52 = sext i32 %51 to i64
  %53 = getelementptr inbounds i8, i8* %50, i64 %52
  %54 = load i8, i8* %53
  %55 = sext i8 %54 to i32
  %56 = load i8**, i8*** %4
  %57 = getelementptr inbounds i8*, i8** %56, i64 0
  %58 = load i8*, i8** %57
  %59 = load i32, i32* %7
  %60 = sext i32 %59 to i64
  %61 = getelementptr inbounds i8, i8* %58, i64 %60
  %62 = load i8, i8* %61
  %63 = sext i8 %62 to i32
  %64 = icmp ne i32 %55, %63
  br i1 %64, label %87, label %65
65:
  %66 = load i8**, i8*** %4
  %67 = load i32, i32* %9
  %68 = sext i32 %67 to i64
  %69 = getelementptr inbounds i8*, i8** %66, i64 %68
  %70 = load i8*, i8** %69
  %71 = load i32, i32* %7
  %72 = add nsw i32 %71, 1
  %73 = sext i32 %72 to i64
  %74 = getelementptr inbounds i8, i8* %70, i64 %73
  %75 = load i8, i8* %74
  %76 = sext i8 %75 to i32
  %77 = load i8**, i8*** %4
  %78 = getelementptr inbounds i8*, i8** %77, i64 0
  %79 = load i8*, i8** %78
  %80 = load i32, i32* %7
  %81 = add nsw i32 %80, 1
  %82 = sext i32 %81 to i64
  %83 = getelementptr inbounds i8, i8* %79, i64 %82
  %84 = load i8, i8* %83
  %85 = sext i8 %84 to i32
  %86 = icmp ne i32 %76, %85
  br i1 %86, label %87, label %88
87:
  store i32 0, i32* %8
  store i32 4, i32* %10
  br label %92
88:
  br label %89
89:
  %90 = load i32, i32* %9
  %91 = add nsw i32 %90, 1
  store i32 %91, i32* %9
  br label %40
92:
  br label %94
94:
  %95 = load i32, i32* %8
  %96 = icmp ne i32 %95, 0
  br i1 %96, label %97, label %124
97:
  %98 = load i8**, i8*** %4
  %99 = getelementptr inbounds i8*, i8** %98, i64 0
  %100 = load i8*, i8** %99
  %101 = load i32, i32* %7
  %102 = sext i32 %101 to i64
  %103 = getelementptr inbounds i8, i8* %100, i64 %102
  %104 = load i8, i8* %103
  %105 = load i8*, i8** %6
  %106 = load i32, i32* %7
  %107 = sext i32 %106 to i64
  %108 = getelementptr inbounds i8, i8* %105, i64 %107
  store i8 %104, i8* %108
  %109 = load i8**, i8*** %4
  %110 = getelementptr inbounds i8*, i8** %109, i64 0
  %111 = load i8*, i8** %110
  %112 = load i32, i32* %7
  %113 = add nsw i32 %112, 1
  %114 = sext i32 %113 to i64
  %115 = getelementptr inbounds i8, i8* %111, i64 %114
  %116 = load i8, i8* %115
  %117 = load i8*, i8** %6
  %118 = load i32, i32* %7
  %119 = add nsw i32 %118, 1
  %120 = sext i32 %119 to i64
  %121 = getelementptr inbounds i8, i8* %117, i64 %120
  store i8 %116, i8* %121
  %122 = load i32, i32* %7
  %123 = add nsw i32 %122, 2
  store i32 %123, i32* %7
  br label %125
124:
  store i32 3, i32* %10
  br label %126
125:
  store i32 0, i32* %10
  br label %126
126:
  %128 = load i32, i32* %10
  switch i32 %128, label %198 [
    i32 0, label %129
    i32 3, label %130
  ]
129:
  br label %14
130:
  %131 = load i8**, i8*** %4
  %132 = getelementptr inbounds i8*, i8** %131, i64 0
  %133 = load i8*, i8** %132
  %134 = load i32, i32* %7
  %135 = sext i32 %134 to i64
  %136 = getelementptr inbounds i8, i8* %133, i64 %135
  %137 = load i8, i8* %136
  %138 = icmp ne i8 %137, 0
  br i1 %138, label %139, label %192
139:
  store i32 1, i32* %11
  store i32 1, i32* %12
  br label %142
142:
  %143 = load i32, i32* %12
  %144 = load i32, i32* %5
  %145 = icmp slt i32 %143, %144
  br i1 %145, label %148, label %146
146:
  store i32 7, i32* %10
  br label %173
148:
  %149 = load i8**, i8*** %4
  %150 = load i32, i32* %12
  %151 = sext i32 %150 to i64
  %152 = getelementptr inbounds i8*, i8** %149, i64 %151
  %153 = load i8*, i8** %152
  %154 = load i32, i32* %7
  %155 = sext i32 %154 to i64
  %156 = getelementptr inbounds i8, i8* %153, i64 %155
  %157 = load i8, i8* %156
  %158 = sext i8 %157 to i32
  %159 = load i8**, i8*** %4
  %160 = getelementptr inbounds i8*, i8** %159, i64 0
  %161 = load i8*, i8** %160
  %162 = load i32, i32* %7
  %163 = sext i32 %162 to i64
  %164 = getelementptr inbounds i8, i8* %161, i64 %163
  %165 = load i8, i8* %164
  %166 = sext i8 %165 to i32
  %167 = icmp ne i32 %158, %166
  br i1 %167, label %168, label %169
168:
  store i32 0, i32* %11
  br label %169
169:
  br label %170
170:
  %171 = load i32, i32* %12
  %172 = add nsw i32 %171, 1
  store i32 %172, i32* %12
  br label %142
173:
  %174 = load i32, i32* %11
  %175 = icmp ne i32 %174, 0
  br i1 %175, label %176, label %190
176:
  %177 = load i8**, i8*** %4
  %178 = getelementptr inbounds i8*, i8** %177, i64 0
  %179 = load i8*, i8** %178
  %180 = load i32, i32* %7
  %181 = sext i32 %180 to i64
  %182 = getelementptr inbounds i8, i8* %179, i64 %181
  %183 = load i8, i8* %182
  %184 = load i8*, i8** %6
  %185 = load i32, i32* %7
  %186 = sext i32 %185 to i64
  %187 = getelementptr inbounds i8, i8* %184, i64 %186
  store i8 %183, i8* %187
  %188 = load i32, i32* %7
  %189 = add nsw i32 %188, 1
  store i32 %189, i32* %7
  br label %190
190:
  br label %192
192:
  %193 = load i8*, i8** %6
  %194 = load i32, i32* %7
  %195 = sext i32 %194 to i64
  %196 = getelementptr inbounds i8, i8* %193, i64 %195
  store i8 0, i8* %196
  ret void
198:
  unreachable
}
