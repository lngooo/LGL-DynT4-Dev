@.str = constant [2 x i8] c" \00"
@.str.1 = constant [4 x i8] c"%s\0A\00"
define dso_local void @ReverseWords(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i8
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  %12 = alloca i32
  %13 = alloca i32
  %14 = alloca i8
  store i8* %0, i8** %2
  store i32 0, i32* %3
  store i32 0, i32* %4
  br label %17
17:
  %18 = load i8*, i8** %2
  %19 = load i32, i32* %3
  %20 = load i32, i32* %4
  %21 = add nsw i32 %19, %20
  %22 = sext i32 %21 to i64
  %23 = getelementptr inbounds i8, i8* %18, i64 %22
  %24 = load i8, i8* %23
  %25 = icmp ne i8 %24, 0
  br i1 %25, label %26, label %29
26:
  %27 = load i32, i32* %3
  %28 = add nsw i32 %27, 1
  store i32 %28, i32* %3
  br label %17
29:
  %31 = load i32, i32* %3
  %32 = load i32, i32* %4
  %33 = add nsw i32 %31, %32
  store i32 %33, i32* %5
  store i32 0, i32* %6
  br label %35
35:
  %36 = load i32, i32* %6
  %37 = load i32, i32* %5
  %38 = ashr i32 %37, 1
  %39 = icmp slt i32 %36, %38
  br i1 %39, label %42, label %40
40:
  br label %71
42:
  %43 = load i8*, i8** %2
  %44 = load i32, i32* %6
  %45 = sext i32 %44 to i64
  %46 = getelementptr inbounds i8, i8* %43, i64 %45
  %47 = load i8, i8* %46
  store i8 %47, i8* %7
  %49 = load i32, i32* %5
  %50 = sub nsw i32 %49, 1
  %51 = load i32, i32* %6
  %52 = sub nsw i32 %50, %51
  store i32 %52, i32* %8
  %53 = load i8*, i8** %2
  %54 = load i32, i32* %8
  %55 = sext i32 %54 to i64
  %56 = getelementptr inbounds i8, i8* %53, i64 %55
  %57 = load i8, i8* %56
  %58 = load i8*, i8** %2
  %59 = load i32, i32* %6
  %60 = sext i32 %59 to i64
  %61 = getelementptr inbounds i8, i8* %58, i64 %60
  store i8 %57, i8* %61
  %62 = load i8, i8* %7
  %63 = load i8*, i8** %2
  %64 = load i32, i32* %8
  %65 = sext i32 %64 to i64
  %66 = getelementptr inbounds i8, i8* %63, i64 %65
  store i8 %62, i8* %66
  br label %68
68:
  %69 = load i32, i32* %6
  %70 = add nsw i32 %69, 1
  store i32 %70, i32* %6
  br label %35
71:
  store i32 0, i32* %9
  store i32 0, i32* %10
  br label %74
74:
  %75 = load i32, i32* %10
  %76 = load i32, i32* %5
  %77 = icmp sle i32 %75, %76
  br i1 %77, label %80, label %78
78:
  store i32 7, i32* %11
  br label %151
80:
  %81 = load i8*, i8** %2
  %82 = load i32, i32* %10
  %83 = sext i32 %82 to i64
  %84 = getelementptr inbounds i8, i8* %81, i64 %83
  %85 = load i8, i8* %84
  %86 = sext i8 %85 to i32
  %87 = xor i32 %86, 32
  %88 = icmp eq i32 %87, 0
  br i1 %88, label %97, label %89
89:
  %90 = load i8*, i8** %2
  %91 = load i32, i32* %10
  %92 = sext i32 %91 to i64
  %93 = getelementptr inbounds i8, i8* %90, i64 %92
  %94 = load i8, i8* %93
  %95 = sext i8 %94 to i32
  %96 = icmp eq i32 %95, 0
  br i1 %96, label %97, label %147
97:
  %99 = load i32, i32* %10
  %100 = load i32, i32* %9
  %101 = sub nsw i32 %99, %100
  %102 = sdiv i32 %101, 2
  store i32 %102, i32* %12
  store i32 0, i32* %13
  br label %104
104:
  %105 = load i32, i32* %13
  %106 = load i32, i32* %12
  %107 = icmp slt i32 %105, %106
  br i1 %107, label %110, label %108
108:
  store i32 10, i32* %11
  br label %143
110:
  %111 = load i8*, i8** %2
  %112 = load i32, i32* %9
  %113 = load i32, i32* %13
  %114 = add nsw i32 %112, %113
  %115 = sext i32 %114 to i64
  %116 = getelementptr inbounds i8, i8* %111, i64 %115
  %117 = load i8, i8* %116
  store i8 %117, i8* %14
  %118 = load i8*, i8** %2
  %119 = load i32, i32* %10
  %120 = sub nsw i32 %119, 1
  %121 = load i32, i32* %13
  %122 = sub nsw i32 %120, %121
  %123 = sext i32 %122 to i64
  %124 = getelementptr inbounds i8, i8* %118, i64 %123
  %125 = load i8, i8* %124
  %126 = load i8*, i8** %2
  %127 = load i32, i32* %9
  %128 = load i32, i32* %13
  %129 = add nsw i32 %127, %128
  %130 = sext i32 %129 to i64
  %131 = getelementptr inbounds i8, i8* %126, i64 %130
  store i8 %125, i8* %131
  %132 = load i8, i8* %14
  %133 = load i8*, i8** %2
  %134 = load i32, i32* %10
  %135 = sub nsw i32 %134, 1
  %136 = load i32, i32* %13
  %137 = sub nsw i32 %135, %136
  %138 = sext i32 %137 to i64
  %139 = getelementptr inbounds i8, i8* %133, i64 %138
  store i8 %132, i8* %139
  br label %140
140:
  %141 = load i32, i32* %13
  %142 = add nsw i32 %141, 1
  store i32 %142, i32* %13
  br label %104
143:
  %144 = load i32, i32* %10
  %145 = add nsw i32 %144, 1
  store i32 %145, i32* %9
  br label %147
147:
  br label %148
148:
  %149 = load i32, i32* %10
  %150 = add nsw i32 %149, 1
  store i32 %150, i32* %10
  br label %74
151:
  ret void
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca [512 x i8]
  %7 = alloca i32
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %8 = load i32, i32* %4
  %9 = icmp slt i32 %8, 2
  br i1 %9, label %10, label %11
10:
  store i32 0, i32* %3
  br label %45
11:
  call void @llvm.memset.p0i8.i64(i8* align 16 %13, i8 0, i64 512, i1 false)
  store i32 1, i32* %7
  br label %15
15:
  %16 = load i32, i32* %7
  %17 = load i32, i32* %4
  %18 = icmp slt i32 %16, %17
  br i1 %18, label %21, label %19
19:
  br label %40
21:
  %22 = getelementptr inbounds [512 x i8], [512 x i8]* %6, i64 0, i64 0
  %23 = load i8**, i8*** %5
  %24 = load i32, i32* %7
  %25 = sext i32 %24 to i64
  %26 = getelementptr inbounds i8*, i8** %23, i64 %25
  %27 = load i8*, i8** %26
  %28 = call i8* @strcat(i8* %22, i8* %27)
  %29 = load i32, i32* %7
  %30 = load i32, i32* %4
  %31 = sub nsw i32 %30, 1
  %32 = icmp slt i32 %29, %31
  br i1 %32, label %33, label %36
33:
  %34 = getelementptr inbounds [512 x i8], [512 x i8]* %6, i64 0, i64 0
  %35 = call i8* @strcat(i8* %34, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str, i64 0, i64 0))
  br label %36
36:
  br label %37
37:
  %38 = load i32, i32* %7
  %39 = add nsw i32 %38, 1
  store i32 %39, i32* %7
  br label %15
40:
  %41 = getelementptr inbounds [512 x i8], [512 x i8]* %6, i64 0, i64 0
  call void @ReverseWords(i8* %41)
  %42 = getelementptr inbounds [512 x i8], [512 x i8]* %6, i64 0, i64 0
  %43 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str.1, i64 0, i64 0), i8* %42)
  store i32 0, i32* %3
  br label %45
45:
  %46 = load i32, i32* %3
  ret i32 %46
}
declare void @llvm.memset.p0i8.i64(i8* nocapture writeonly, i8, i64, i1 immarg)
declare i8* @strcat(i8*, i8*)
declare i32 @printf(i8*, ...)
