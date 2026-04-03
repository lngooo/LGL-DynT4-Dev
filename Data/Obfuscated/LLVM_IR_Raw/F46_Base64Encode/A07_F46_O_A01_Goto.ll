@.str = constant [65 x i8] c"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/\00"
@.str.1 = constant [4 x i8] c"%s\0A\00"
define dso_local void @Fk(i8* %0, i32 %1, i8* %2) {
  %4 = alloca i8*
  %5 = alloca i32
  %6 = alloca i8*
  %7 = alloca i8*
  %8 = alloca i32
  %9 = alloca i32
  store i8* %0, i8** %4
  store i32 %1, i32* %5
  store i8* %2, i8** %6
  store i8* getelementptr inbounds ([65 x i8], [65 x i8]* @.str, i64 0, i64 0), i8** %7
  store i32 0, i32* %8
  store i32 0, i32* %9
  br label %13
13:
  %14 = load i32, i32* %8
  %15 = load i32, i32* %5
  %16 = icmp sge i32 %14, %15
  br i1 %16, label %17, label %18
17:
  br label %150
18:
  %19 = load i8*, i8** %7
  %20 = load i8*, i8** %4
  %21 = load i32, i32* %8
  %22 = sext i32 %21 to i64
  %23 = getelementptr inbounds i8, i8* %20, i64 %22
  %24 = load i8, i8* %23
  %25 = zext i8 %24 to i32
  %26 = ashr i32 %25, 2
  %27 = sext i32 %26 to i64
  %28 = getelementptr inbounds i8, i8* %19, i64 %27
  %29 = load i8, i8* %28
  %30 = load i8*, i8** %6
  %31 = load i32, i32* %9
  %32 = add nsw i32 %31, 1
  store i32 %32, i32* %9
  %33 = sext i32 %31 to i64
  %34 = getelementptr inbounds i8, i8* %30, i64 %33
  store i8 %29, i8* %34
  %35 = load i8*, i8** %7
  %36 = load i8*, i8** %4
  %37 = load i32, i32* %8
  %38 = sext i32 %37 to i64
  %39 = getelementptr inbounds i8, i8* %36, i64 %38
  %40 = load i8, i8* %39
  %41 = zext i8 %40 to i32
  %42 = and i32 %41, 3
  %43 = shl i32 %42, 4
  %44 = load i32, i32* %8
  %45 = add nsw i32 %44, 1
  %46 = load i32, i32* %5
  %47 = icmp slt i32 %45, %46
  br i1 %47, label %48, label %57
48:
  %49 = load i8*, i8** %4
  %50 = load i32, i32* %8
  %51 = add nsw i32 %50, 1
  %52 = sext i32 %51 to i64
  %53 = getelementptr inbounds i8, i8* %49, i64 %52
  %54 = load i8, i8* %53
  %55 = zext i8 %54 to i32
  %56 = ashr i32 %55, 4
  br label %58
57:
  br label %58
58:
  %59 = phi i32 [ %56, %48 ], [ 0, %57 ]
  %60 = or i32 %43, %59
  %61 = sext i32 %60 to i64
  %62 = getelementptr inbounds i8, i8* %35, i64 %61
  %63 = load i8, i8* %62
  %64 = load i8*, i8** %6
  %65 = load i32, i32* %9
  %66 = add nsw i32 %65, 1
  store i32 %66, i32* %9
  %67 = sext i32 %65 to i64
  %68 = getelementptr inbounds i8, i8* %64, i64 %67
  store i8 %63, i8* %68
  %69 = load i32, i32* %8
  %70 = add nsw i32 %69, 1
  %71 = load i32, i32* %5
  %72 = icmp sge i32 %70, %71
  br i1 %72, label %73, label %84
73:
  %74 = load i8*, i8** %6
  %75 = load i32, i32* %9
  %76 = add nsw i32 %75, 1
  store i32 %76, i32* %9
  %77 = sext i32 %75 to i64
  %78 = getelementptr inbounds i8, i8* %74, i64 %77
  store i8 61, i8* %78
  %79 = load i8*, i8** %6
  %80 = load i32, i32* %9
  %81 = add nsw i32 %80, 1
  store i32 %81, i32* %9
  %82 = sext i32 %80 to i64
  %83 = getelementptr inbounds i8, i8* %79, i64 %82
  store i8 61, i8* %83
  br label %150
84:
  %85 = load i8*, i8** %7
  %86 = load i8*, i8** %4
  %87 = load i32, i32* %8
  %88 = add nsw i32 %87, 1
  %89 = sext i32 %88 to i64
  %90 = getelementptr inbounds i8, i8* %86, i64 %89
  %91 = load i8, i8* %90
  %92 = zext i8 %91 to i32
  %93 = and i32 %92, 15
  %94 = shl i32 %93, 2
  %95 = load i32, i32* %8
  %96 = add nsw i32 %95, 2
  %97 = load i32, i32* %5
  %98 = icmp slt i32 %96, %97
  br i1 %98, label %99, label %108
99:
  %100 = load i8*, i8** %4
  %101 = load i32, i32* %8
  %102 = add nsw i32 %101, 2
  %103 = sext i32 %102 to i64
  %104 = getelementptr inbounds i8, i8* %100, i64 %103
  %105 = load i8, i8* %104
  %106 = zext i8 %105 to i32
  %107 = ashr i32 %106, 6
  br label %109
108:
  br label %109
109:
  %110 = phi i32 [ %107, %99 ], [ 0, %108 ]
  %111 = or i32 %94, %110
  %112 = sext i32 %111 to i64
  %113 = getelementptr inbounds i8, i8* %85, i64 %112
  %114 = load i8, i8* %113
  %115 = load i8*, i8** %6
  %116 = load i32, i32* %9
  %117 = add nsw i32 %116, 1
  store i32 %117, i32* %9
  %118 = sext i32 %116 to i64
  %119 = getelementptr inbounds i8, i8* %115, i64 %118
  store i8 %114, i8* %119
  %120 = load i32, i32* %8
  %121 = add nsw i32 %120, 2
  %122 = load i32, i32* %5
  %123 = icmp sge i32 %121, %122
  br i1 %123, label %124, label %130
124:
  %125 = load i8*, i8** %6
  %126 = load i32, i32* %9
  %127 = add nsw i32 %126, 1
  store i32 %127, i32* %9
  %128 = sext i32 %126 to i64
  %129 = getelementptr inbounds i8, i8* %125, i64 %128
  store i8 61, i8* %129
  br label %150
130:
  %131 = load i8*, i8** %7
  %132 = load i8*, i8** %4
  %133 = load i32, i32* %8
  %134 = add nsw i32 %133, 2
  %135 = sext i32 %134 to i64
  %136 = getelementptr inbounds i8, i8* %132, i64 %135
  %137 = load i8, i8* %136
  %138 = zext i8 %137 to i32
  %139 = and i32 %138, 63
  %140 = sext i32 %139 to i64
  %141 = getelementptr inbounds i8, i8* %131, i64 %140
  %142 = load i8, i8* %141
  %143 = load i8*, i8** %6
  %144 = load i32, i32* %9
  %145 = add nsw i32 %144, 1
  store i32 %145, i32* %9
  %146 = sext i32 %144 to i64
  %147 = getelementptr inbounds i8, i8* %143, i64 %146
  store i8 %142, i8* %147
  %148 = load i32, i32* %8
  %149 = add nsw i32 %148, 3
  store i32 %149, i32* %8
  br label %13
150:
  %151 = load i8*, i8** %6
  %152 = load i32, i32* %9
  %153 = sext i32 %152 to i64
  %154 = getelementptr inbounds i8, i8* %151, i64 %153
  store i8 0, i8* %154
  ret void
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i8*
  %7 = alloca i32
  %8 = alloca [400 x i8]
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %9 = load i32, i32* %4
  %10 = icmp slt i32 %9, 2
  br i1 %10, label %11, label %12
11:
  store i32 1, i32* %3
  br label %39
12:
  %14 = load i8**, i8*** %5
  %15 = getelementptr inbounds i8*, i8** %14, i64 1
  %16 = load i8*, i8** %15
  store i8* %16, i8** %6
  store i32 0, i32* %7
  br label %18
18:
  %19 = load i8*, i8** %6
  %20 = load i32, i32* %7
  %21 = sext i32 %20 to i64
  %22 = getelementptr inbounds i8, i8* %19, i64 %21
  %23 = load i8, i8* %22
  %24 = icmp ne i8 %23, 0
  br i1 %24, label %25, label %28
25:
  %26 = load i32, i32* %7
  %27 = add nsw i32 %26, 1
  store i32 %27, i32* %7
  br label %18
28:
  call void @llvm.memset.p0i8.i64(i8* align 16 %30, i8 0, i64 400, i1 false)
  %31 = load i8*, i8** %6
  %32 = load i32, i32* %7
  %33 = getelementptr inbounds [400 x i8], [400 x i8]* %8, i64 0, i64 0
  call void @Fk(i8* %31, i32 %32, i8* %33)
  %34 = getelementptr inbounds [400 x i8], [400 x i8]* %8, i64 0, i64 0
  %35 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str.1, i64 0, i64 0), i8* %34)
  store i32 0, i32* %3
  br label %39
39:
  %40 = load i32, i32* %3
  ret i32 %40
}
declare void @llvm.memset.p0i8.i64(i8* nocapture writeonly, i8, i64, i1 immarg)
declare i32 @printf(i8*, ...)
