@.str = constant [2 x i8] c" \00"
@.str.1 = constant [4 x i8] c"%s\0A\00"
define dso_local void @gWrf(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i8
  store i8* %0, i8** %2
  store i32 0, i32* %3
  br label %11
11:
  %12 = load i8*, i8** %2
  %13 = load i32, i32* %3
  %14 = sext i32 %13 to i64
  %15 = getelementptr inbounds i8, i8* %12, i64 %14
  %16 = load i8, i8* %15
  %17 = icmp ne i8 %16, 0
  br i1 %17, label %18, label %21
18:
  %19 = load i32, i32* %3
  %20 = add nsw i32 %19, 1
  store i32 %20, i32* %3
  br label %11
21:
  store i32 0, i32* %4
  br label %23
23:
  %24 = load i32, i32* %4
  %25 = load i32, i32* %3
  %26 = sdiv i32 %25, 2
  %27 = icmp slt i32 %24, %26
  br i1 %27, label %30, label %28
28:
  br label %59
30:
  %31 = load i8*, i8** %2
  %32 = load i32, i32* %4
  %33 = sext i32 %32 to i64
  %34 = getelementptr inbounds i8, i8* %31, i64 %33
  %35 = load i8, i8* %34
  store i8 %35, i8* %5
  %36 = load i8*, i8** %2
  %37 = load i32, i32* %3
  %38 = sub nsw i32 %37, 1
  %39 = load i32, i32* %4
  %40 = sub nsw i32 %38, %39
  %41 = sext i32 %40 to i64
  %42 = getelementptr inbounds i8, i8* %36, i64 %41
  %43 = load i8, i8* %42
  %44 = load i8*, i8** %2
  %45 = load i32, i32* %4
  %46 = sext i32 %45 to i64
  %47 = getelementptr inbounds i8, i8* %44, i64 %46
  store i8 %43, i8* %47
  %48 = load i8, i8* %5
  %49 = load i8*, i8** %2
  %50 = load i32, i32* %3
  %51 = sub nsw i32 %50, 1
  %52 = load i32, i32* %4
  %53 = sub nsw i32 %51, %52
  %54 = sext i32 %53 to i64
  %55 = getelementptr inbounds i8, i8* %49, i64 %54
  store i8 %48, i8* %55
  br label %56
56:
  %57 = load i32, i32* %4
  %58 = add nsw i32 %57, 1
  store i32 %58, i32* %4
  br label %23
59:
  store i32 0, i32* %6
  br label %61
61:
  %62 = load i32, i32* %6
  %63 = load i32, i32* %3
  %64 = icmp slt i32 %62, %63
  br i1 %64, label %65, label %137
65:
  %67 = load i32, i32* %6
  store i32 %67, i32* %7
  br label %68
68:
  %69 = load i8*, i8** %2
  %70 = load i32, i32* %7
  %71 = sext i32 %70 to i64
  %72 = getelementptr inbounds i8, i8* %69, i64 %71
  %73 = load i8, i8* %72
  %74 = sext i8 %73 to i32
  %75 = icmp ne i32 %74, 32
  br i1 %75, label %76, label %84
76:
  %77 = load i8*, i8** %2
  %78 = load i32, i32* %7
  %79 = sext i32 %78 to i64
  %80 = getelementptr inbounds i8, i8* %77, i64 %79
  %81 = load i8, i8* %80
  %82 = sext i8 %81 to i32
  %83 = icmp ne i32 %82, 0
  br label %84
84:
  %85 = phi i1 [ false, %68 ], [ %83, %76 ]
  br i1 %85, label %86, label %89
86:
  %87 = load i32, i32* %7
  %88 = add nsw i32 %87, 1
  store i32 %88, i32* %7
  br label %68
89:
  store i32 0, i32* %8
  br label %91
91:
  %92 = load i32, i32* %8
  %93 = load i32, i32* %7
  %94 = load i32, i32* %6
  %95 = sub nsw i32 %93, %94
  %96 = sdiv i32 %95, 2
  %97 = icmp slt i32 %92, %96
  br i1 %97, label %100, label %98
98:
  br label %133
100:
  %101 = load i8*, i8** %2
  %102 = load i32, i32* %6
  %103 = load i32, i32* %8
  %104 = add nsw i32 %102, %103
  %105 = sext i32 %104 to i64
  %106 = getelementptr inbounds i8, i8* %101, i64 %105
  %107 = load i8, i8* %106
  store i8 %107, i8* %9
  %108 = load i8*, i8** %2
  %109 = load i32, i32* %7
  %110 = sub nsw i32 %109, 1
  %111 = load i32, i32* %8
  %112 = sub nsw i32 %110, %111
  %113 = sext i32 %112 to i64
  %114 = getelementptr inbounds i8, i8* %108, i64 %113
  %115 = load i8, i8* %114
  %116 = load i8*, i8** %2
  %117 = load i32, i32* %6
  %118 = load i32, i32* %8
  %119 = add nsw i32 %117, %118
  %120 = sext i32 %119 to i64
  %121 = getelementptr inbounds i8, i8* %116, i64 %120
  store i8 %115, i8* %121
  %122 = load i8, i8* %9
  %123 = load i8*, i8** %2
  %124 = load i32, i32* %7
  %125 = sub nsw i32 %124, 1
  %126 = load i32, i32* %8
  %127 = sub nsw i32 %125, %126
  %128 = sext i32 %127 to i64
  %129 = getelementptr inbounds i8, i8* %123, i64 %128
  store i8 %122, i8* %129
  br label %130
130:
  %131 = load i32, i32* %8
  %132 = add nsw i32 %131, 1
  store i32 %132, i32* %8
  br label %91
133:
  %134 = load i32, i32* %7
  %135 = add nsw i32 %134, 1
  store i32 %135, i32* %6
  br label %61
137:
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
  call void @gWrf(i8* %41)
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
