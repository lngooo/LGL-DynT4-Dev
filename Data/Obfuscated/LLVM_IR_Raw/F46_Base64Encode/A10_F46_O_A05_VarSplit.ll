@.str = constant [65 x i8] c"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/\00"
@.str.1 = constant [4 x i8] c"%s\0A\00"
define dso_local void @TaZ(i8* %0, i32 %1, i8* %2) {
  %4 = alloca i8*
  %5 = alloca i32
  %6 = alloca i8*
  %7 = alloca i8*
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i8
  %12 = alloca i8
  %13 = alloca i8
  store i8* %0, i8** %4
  store i32 %1, i32* %5
  store i8* %2, i8** %6
  store i8* getelementptr inbounds ([65 x i8], [65 x i8]* @.str, i64 0, i64 0), i8** %7
  store i32 0, i32* %8
  store i32 0, i32* %9
  br label %17
17:
  %18 = load i32, i32* %8
  %19 = load i32, i32* %9
  %20 = add nsw i32 %18, %19
  %21 = load i32, i32* %5
  %22 = icmp slt i32 %20, %21
  br i1 %22, label %23, label %153
23:
  %25 = load i32, i32* %8
  %26 = load i32, i32* %9
  %27 = add nsw i32 %25, %26
  store i32 %27, i32* %10
  %28 = load i8*, i8** %4
  %29 = load i32, i32* %10
  %30 = sext i32 %29 to i64
  %31 = getelementptr inbounds i8, i8* %28, i64 %30
  %32 = load i8, i8* %31
  store i8 %32, i8* %11
  %33 = load i32, i32* %10
  %34 = add nsw i32 %33, 1
  %35 = load i32, i32* %5
  %36 = icmp slt i32 %34, %35
  br i1 %36, label %37, label %45
37:
  %38 = load i8*, i8** %4
  %39 = load i32, i32* %10
  %40 = add nsw i32 %39, 1
  %41 = sext i32 %40 to i64
  %42 = getelementptr inbounds i8, i8* %38, i64 %41
  %43 = load i8, i8* %42
  %44 = zext i8 %43 to i32
  br label %46
45:
  br label %46
46:
  %47 = phi i32 [ %44, %37 ], [ 0, %45 ]
  %48 = trunc i32 %47 to i8
  store i8 %48, i8* %12
  %49 = load i32, i32* %10
  %50 = add nsw i32 %49, 2
  %51 = load i32, i32* %5
  %52 = icmp slt i32 %50, %51
  br i1 %52, label %53, label %61
53:
  %54 = load i8*, i8** %4
  %55 = load i32, i32* %10
  %56 = add nsw i32 %55, 2
  %57 = sext i32 %56 to i64
  %58 = getelementptr inbounds i8, i8* %54, i64 %57
  %59 = load i8, i8* %58
  %60 = zext i8 %59 to i32
  br label %62
61:
  br label %62
62:
  %63 = phi i32 [ %60, %53 ], [ 0, %61 ]
  %64 = trunc i32 %63 to i8
  store i8 %64, i8* %13
  %65 = load i8*, i8** %7
  %66 = load i8, i8* %11
  %67 = zext i8 %66 to i32
  %68 = ashr i32 %67, 2
  %69 = sext i32 %68 to i64
  %70 = getelementptr inbounds i8, i8* %65, i64 %69
  %71 = load i8, i8* %70
  %72 = load i8*, i8** %6
  %73 = load i32, i32* %10
  %74 = sdiv i32 %73, 3
  %75 = mul nsw i32 %74, 4
  %76 = sext i32 %75 to i64
  %77 = getelementptr inbounds i8, i8* %72, i64 %76
  store i8 %71, i8* %77
  %78 = load i8*, i8** %7
  %79 = load i8, i8* %11
  %80 = zext i8 %79 to i32
  %81 = and i32 %80, 3
  %82 = shl i32 %81, 4
  %83 = load i8, i8* %12
  %84 = zext i8 %83 to i32
  %85 = ashr i32 %84, 4
  %86 = or i32 %82, %85
  %87 = sext i32 %86 to i64
  %88 = getelementptr inbounds i8, i8* %78, i64 %87
  %89 = load i8, i8* %88
  %90 = load i8*, i8** %6
  %91 = load i32, i32* %10
  %92 = sdiv i32 %91, 3
  %93 = mul nsw i32 %92, 4
  %94 = add nsw i32 %93, 1
  %95 = sext i32 %94 to i64
  %96 = getelementptr inbounds i8, i8* %90, i64 %95
  store i8 %89, i8* %96
  %97 = load i32, i32* %10
  %98 = add nsw i32 %97, 1
  %99 = load i32, i32* %5
  %100 = icmp slt i32 %98, %99
  br i1 %100, label %101, label %115
101:
  %102 = load i8*, i8** %7
  %103 = load i8, i8* %12
  %104 = zext i8 %103 to i32
  %105 = and i32 %104, 15
  %106 = shl i32 %105, 2
  %107 = load i8, i8* %13
  %108 = zext i8 %107 to i32
  %109 = ashr i32 %108, 6
  %110 = or i32 %106, %109
  %111 = sext i32 %110 to i64
  %112 = getelementptr inbounds i8, i8* %102, i64 %111
  %113 = load i8, i8* %112
  %114 = sext i8 %113 to i32
  br label %116
115:
  br label %116
116:
  %117 = phi i32 [ %114, %101 ], [ 61, %115 ]
  %118 = trunc i32 %117 to i8
  %119 = load i8*, i8** %6
  %120 = load i32, i32* %10
  %121 = sdiv i32 %120, 3
  %122 = mul nsw i32 %121, 4
  %123 = add nsw i32 %122, 2
  %124 = sext i32 %123 to i64
  %125 = getelementptr inbounds i8, i8* %119, i64 %124
  store i8 %118, i8* %125
  %126 = load i32, i32* %10
  %127 = add nsw i32 %126, 2
  %128 = load i32, i32* %5
  %129 = icmp slt i32 %127, %128
  br i1 %129, label %130, label %139
130:
  %131 = load i8*, i8** %7
  %132 = load i8, i8* %13
  %133 = zext i8 %132 to i32
  %134 = and i32 %133, 63
  %135 = sext i32 %134 to i64
  %136 = getelementptr inbounds i8, i8* %131, i64 %135
  %137 = load i8, i8* %136
  %138 = sext i8 %137 to i32
  br label %140
139:
  br label %140
140:
  %141 = phi i32 [ %138, %130 ], [ 61, %139 ]
  %142 = trunc i32 %141 to i8
  %143 = load i8*, i8** %6
  %144 = load i32, i32* %10
  %145 = sdiv i32 %144, 3
  %146 = mul nsw i32 %145, 4
  %147 = add nsw i32 %146, 3
  %148 = sext i32 %147 to i64
  %149 = getelementptr inbounds i8, i8* %143, i64 %148
  store i8 %142, i8* %149
  %150 = load i32, i32* %8
  %151 = add nsw i32 %150, 3
  store i32 %151, i32* %8
  br label %17
153:
  %154 = load i8*, i8** %6
  %155 = load i32, i32* %5
  %156 = add nsw i32 %155, 2
  %157 = sdiv i32 %156, 3
  %158 = mul nsw i32 %157, 4
  %159 = sext i32 %158 to i64
  %160 = getelementptr inbounds i8, i8* %154, i64 %159
  store i8 0, i8* %160
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
  call void @TaZ(i8* %31, i32 %32, i8* %33)
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
