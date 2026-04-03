@.str = constant [3 x i8] c"0\0A\00"
@.str.1 = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @VowelCount(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i8
  store i8* %0, i8** %2
  store i32 0, i32* %3
  br label %6
6:
  %7 = load i8*, i8** %2
  %8 = load i8, i8* %7
  %9 = icmp ne i8 %8, 0
  br i1 %9, label %10, label %86
10:
  %11 = load i8*, i8** %2
  %12 = load i8, i8* %11
  store i8 %12, i8* %4
  %13 = load i8, i8* %4
  %14 = sext i8 %13 to i32
  %15 = icmp eq i32 %14, 97
  br i1 %15, label %16, label %17
16:
  br label %79
17:
  %18 = load i8, i8* %4
  %19 = sext i8 %18 to i32
  %20 = icmp eq i32 %19, 101
  br i1 %20, label %21, label %22
21:
  br label %77
22:
  %23 = load i8, i8* %4
  %24 = sext i8 %23 to i32
  %25 = icmp eq i32 %24, 105
  br i1 %25, label %26, label %27
26:
  br label %75
27:
  %28 = load i8, i8* %4
  %29 = sext i8 %28 to i32
  %30 = icmp eq i32 %29, 111
  br i1 %30, label %31, label %32
31:
  br label %73
32:
  %33 = load i8, i8* %4
  %34 = sext i8 %33 to i32
  %35 = icmp eq i32 %34, 117
  br i1 %35, label %36, label %37
36:
  br label %71
37:
  %38 = load i8, i8* %4
  %39 = sext i8 %38 to i32
  %40 = icmp eq i32 %39, 65
  br i1 %40, label %41, label %42
41:
  br label %69
42:
  %43 = load i8, i8* %4
  %44 = sext i8 %43 to i32
  %45 = icmp eq i32 %44, 69
  br i1 %45, label %46, label %47
46:
  br label %67
47:
  %48 = load i8, i8* %4
  %49 = sext i8 %48 to i32
  %50 = icmp eq i32 %49, 73
  br i1 %50, label %51, label %52
51:
  br label %65
52:
  %53 = load i8, i8* %4
  %54 = sext i8 %53 to i32
  %55 = icmp eq i32 %54, 79
  br i1 %55, label %56, label %57
56:
  br label %63
57:
  %58 = load i8, i8* %4
  %59 = sext i8 %58 to i32
  %60 = icmp eq i32 %59, 85
  %61 = zext i1 %60 to i64
  %62 = select i1 %60, i32 1, i32 0
  br label %63
63:
  %64 = phi i32 [ 1, %56 ], [ %62, %57 ]
  br label %65
65:
  %66 = phi i32 [ 1, %51 ], [ %64, %63 ]
  br label %67
67:
  %68 = phi i32 [ 1, %46 ], [ %66, %65 ]
  br label %69
69:
  %70 = phi i32 [ 1, %41 ], [ %68, %67 ]
  br label %71
71:
  %72 = phi i32 [ 1, %36 ], [ %70, %69 ]
  br label %73
73:
  %74 = phi i32 [ 1, %31 ], [ %72, %71 ]
  br label %75
75:
  %76 = phi i32 [ 1, %26 ], [ %74, %73 ]
  br label %77
77:
  %78 = phi i32 [ 1, %21 ], [ %76, %75 ]
  br label %79
79:
  %80 = phi i32 [ 1, %16 ], [ %78, %77 ]
  %81 = load i32, i32* %3
  %82 = add nsw i32 %81, %80
  store i32 %82, i32* %3
  br label %83
83:
  %84 = load i8*, i8** %2
  %85 = getelementptr inbounds i8, i8* %84, i32 1
  store i8* %85, i8** %2
  br label %6
86:
  %87 = load i32, i32* %3
  ret i32 %87
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %6 = load i32, i32* %4
  %7 = icmp slt i32 %6, 2
  br i1 %7, label %8, label %10
8:
  %9 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0))
  store i32 0, i32* %3
  br label %16
10:
  %11 = load i8**, i8*** %5
  %12 = getelementptr inbounds i8*, i8** %11, i64 1
  %13 = load i8*, i8** %12
  %14 = call i32 @VowelCount(i8* %13)
  %15 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str.1, i64 0, i64 0), i32 %14)
  store i32 0, i32* %3
  br label %16
16:
  %17 = load i32, i32* %3
  ret i32 %17
}
declare i32 @printf(i8*, ...)
