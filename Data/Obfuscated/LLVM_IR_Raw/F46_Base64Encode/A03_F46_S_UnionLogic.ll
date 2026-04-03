%union.anon = type { i32 }
@.str = constant [65 x i8] c"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/\00"
@.str.1 = constant [4 x i8] c"%s\0A\00"
define dso_local void @KlBM(i8* %0, i32 %1, i8* %2) {
  %4 = alloca i8*
  %5 = alloca i32
  %6 = alloca i8*
  %7 = alloca i8*
  %8 = alloca %union.anon
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  %12 = alloca i32
  store i8* %0, i8** %4
  store i32 %1, i32* %5
  store i8* %2, i8** %6
  store i8* getelementptr inbounds ([65 x i8], [65 x i8]* @.str, i64 0, i64 0), i8** %7
  store i32 0, i32* %9
  store i32 0, i32* %10
  br label %17
17:
  %18 = load i32, i32* %9
  %19 = load i32, i32* %5
  %20 = icmp slt i32 %18, %19
  br i1 %20, label %21, label %123
21:
  store i32 0, i32* %22
  store i32 0, i32* %11
  store i32 0, i32* %12
  br label %25
25:
  %26 = load i32, i32* %12
  %27 = icmp slt i32 %26, 3
  br i1 %27, label %28, label %32
28:
  %29 = load i32, i32* %9
  %30 = load i32, i32* %5
  %31 = icmp slt i32 %29, %30
  br label %32
32:
  %33 = phi i1 [ false, %25 ], [ %31, %28 ]
  br i1 %33, label %36, label %34
34:
  br label %54
36:
  %37 = load i8*, i8** %4
  %38 = load i32, i32* %9
  %39 = sext i32 %38 to i64
  %40 = getelementptr inbounds i8, i8* %37, i64 %39
  %41 = load i8, i8* %40
  %43 = load i32, i32* %12
  %44 = sub nsw i32 2, %43
  %45 = sext i32 %44 to i64
  %46 = getelementptr inbounds [3 x i8], [3 x i8]* %42, i64 0, i64 %45
  store i8 %41, i8* %46
  br label %47
47:
  %48 = load i32, i32* %12
  %49 = add nsw i32 %48, 1
  store i32 %49, i32* %12
  %50 = load i32, i32* %9
  %51 = add nsw i32 %50, 1
  store i32 %51, i32* %9
  %52 = load i32, i32* %11
  %53 = add nsw i32 %52, 1
  store i32 %53, i32* %11
  br label %25
54:
  %55 = load i8*, i8** %7
  %57 = load i32, i32* %56
  %58 = lshr i32 %57, 18
  %59 = and i32 %58, 63
  %60 = zext i32 %59 to i64
  %61 = getelementptr inbounds i8, i8* %55, i64 %60
  %62 = load i8, i8* %61
  %63 = load i8*, i8** %6
  %64 = load i32, i32* %10
  %65 = add nsw i32 %64, 1
  store i32 %65, i32* %10
  %66 = sext i32 %64 to i64
  %67 = getelementptr inbounds i8, i8* %63, i64 %66
  store i8 %62, i8* %67
  %68 = load i8*, i8** %7
  %70 = load i32, i32* %69
  %71 = lshr i32 %70, 12
  %72 = and i32 %71, 63
  %73 = zext i32 %72 to i64
  %74 = getelementptr inbounds i8, i8* %68, i64 %73
  %75 = load i8, i8* %74
  %76 = load i8*, i8** %6
  %77 = load i32, i32* %10
  %78 = add nsw i32 %77, 1
  store i32 %78, i32* %10
  %79 = sext i32 %77 to i64
  %80 = getelementptr inbounds i8, i8* %76, i64 %79
  store i8 %75, i8* %80
  %81 = load i32, i32* %11
  %82 = icmp sgt i32 %81, 1
  br i1 %82, label %83, label %93
83:
  %84 = load i8*, i8** %7
  %86 = load i32, i32* %85
  %87 = lshr i32 %86, 6
  %88 = and i32 %87, 63
  %89 = zext i32 %88 to i64
  %90 = getelementptr inbounds i8, i8* %84, i64 %89
  %91 = load i8, i8* %90
  %92 = sext i8 %91 to i32
  br label %94
93:
  br label %94
94:
  %95 = phi i32 [ %92, %83 ], [ 61, %93 ]
  %96 = trunc i32 %95 to i8
  %97 = load i8*, i8** %6
  %98 = load i32, i32* %10
  %99 = add nsw i32 %98, 1
  store i32 %99, i32* %10
  %100 = sext i32 %98 to i64
  %101 = getelementptr inbounds i8, i8* %97, i64 %100
  store i8 %96, i8* %101
  %102 = load i32, i32* %11
  %103 = icmp sgt i32 %102, 2
  br i1 %103, label %104, label %113
104:
  %105 = load i8*, i8** %7
  %107 = load i32, i32* %106
  %108 = and i32 %107, 63
  %109 = zext i32 %108 to i64
  %110 = getelementptr inbounds i8, i8* %105, i64 %109
  %111 = load i8, i8* %110
  %112 = sext i8 %111 to i32
  br label %114
113:
  br label %114
114:
  %115 = phi i32 [ %112, %104 ], [ 61, %113 ]
  %116 = trunc i32 %115 to i8
  %117 = load i8*, i8** %6
  %118 = load i32, i32* %10
  %119 = add nsw i32 %118, 1
  store i32 %119, i32* %10
  %120 = sext i32 %118 to i64
  %121 = getelementptr inbounds i8, i8* %117, i64 %120
  store i8 %116, i8* %121
  br label %17
123:
  %124 = load i8*, i8** %6
  %125 = load i32, i32* %10
  %126 = sext i32 %125 to i64
  %127 = getelementptr inbounds i8, i8* %124, i64 %126
  store i8 0, i8* %127
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
  call void @KlBM(i8* %31, i32 %32, i8* %33)
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
