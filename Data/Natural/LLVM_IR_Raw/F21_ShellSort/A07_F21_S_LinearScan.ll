@.str = constant [5 x i8] c"%d%c\00"
define dso_local void @ShellSort(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  %12 = load i32, i32* %4
  %13 = sdiv i32 %12, 2
  store i32 %13, i32* %5
  br label %14
14:
  %15 = load i32, i32* %5
  %16 = icmp sgt i32 %15, 0
  br i1 %16, label %19, label %17
17:
  store i32 2, i32* %6
  br label %97
19:
  %21 = load i32, i32* %5
  store i32 %21, i32* %7
  br label %22
22:
  %23 = load i32, i32* %7
  %24 = load i32, i32* %4
  %25 = icmp slt i32 %23, %24
  br i1 %25, label %28, label %26
26:
  store i32 5, i32* %6
  br label %93
28:
  %30 = load i32*, i32** %3
  %31 = load i32, i32* %7
  %32 = sext i32 %31 to i64
  %33 = getelementptr inbounds i32, i32* %30, i64 %32
  %34 = load i32, i32* %33
  store i32 %34, i32* %8
  %36 = load i32, i32* %7
  store i32 %36, i32* %9
  br label %37
37:
  %38 = load i32, i32* %9
  %39 = load i32, i32* %5
  %40 = icmp sge i32 %38, %39
  br i1 %40, label %41, label %51
41:
  %42 = load i32*, i32** %3
  %43 = load i32, i32* %9
  %44 = load i32, i32* %5
  %45 = sub nsw i32 %43, %44
  %46 = sext i32 %45 to i64
  %47 = getelementptr inbounds i32, i32* %42, i64 %46
  %48 = load i32, i32* %47
  %49 = load i32, i32* %8
  %50 = icmp sgt i32 %48, %49
  br label %51
51:
  %52 = phi i1 [ false, %37 ], [ %50, %41 ]
  br i1 %52, label %53, label %57
53:
  %54 = load i32, i32* %5
  %55 = load i32, i32* %9
  %56 = sub nsw i32 %55, %54
  store i32 %56, i32* %9
  br label %37
57:
  %59 = load i32, i32* %7
  store i32 %59, i32* %10
  br label %60
60:
  %61 = load i32, i32* %10
  %62 = load i32, i32* %9
  %63 = icmp sgt i32 %61, %62
  br i1 %63, label %66, label %64
64:
  store i32 10, i32* %6
  br label %82
66:
  %67 = load i32*, i32** %3
  %68 = load i32, i32* %10
  %69 = load i32, i32* %5
  %70 = sub nsw i32 %68, %69
  %71 = sext i32 %70 to i64
  %72 = getelementptr inbounds i32, i32* %67, i64 %71
  %73 = load i32, i32* %72
  %74 = load i32*, i32** %3
  %75 = load i32, i32* %10
  %76 = sext i32 %75 to i64
  %77 = getelementptr inbounds i32, i32* %74, i64 %76
  store i32 %73, i32* %77
  br label %78
78:
  %79 = load i32, i32* %5
  %80 = load i32, i32* %10
  %81 = sub nsw i32 %80, %79
  store i32 %81, i32* %10
  br label %60
82:
  %83 = load i32, i32* %8
  %84 = load i32*, i32** %3
  %85 = load i32, i32* %9
  %86 = sext i32 %85 to i64
  %87 = getelementptr inbounds i32, i32* %84, i64 %86
  store i32 %83, i32* %87
  br label %90
90:
  %91 = load i32, i32* %7
  %92 = add nsw i32 %91, 1
  store i32 %92, i32* %7
  br label %22
93:
  br label %94
94:
  %95 = load i32, i32* %5
  %96 = sdiv i32 %95, 2
  store i32 %96, i32* %5
  br label %14
97:
  ret void
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i32
  %7 = alloca i32*
  %8 = alloca i32
  %9 = alloca i32
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %10 = load i32, i32* %4
  %11 = icmp slt i32 %10, 2
  br i1 %11, label %12, label %13
12:
  store i32 0, i32* %3
  br label %76
13:
  %15 = load i32, i32* %4
  %16 = sub nsw i32 %15, 1
  store i32 %16, i32* %6
  %18 = load i32, i32* %6
  %19 = sext i32 %18 to i64
  %20 = mul i64 %19, 4
  %21 = call noalias i8* @malloc(i64 %20)
  store i32* %22, i32** %7
  store i32 0, i32* %8
  br label %24
24:
  %25 = load i32, i32* %8
  %26 = load i32, i32* %6
  %27 = icmp slt i32 %25, %26
  br i1 %27, label %30, label %28
28:
  br label %45
30:
  %31 = load i8**, i8*** %5
  %32 = load i32, i32* %8
  %33 = add nsw i32 %32, 1
  %34 = sext i32 %33 to i64
  %35 = getelementptr inbounds i8*, i8** %31, i64 %34
  %36 = load i8*, i8** %35
  %37 = call i32 @atoi(i8* %36)
  %38 = load i32*, i32** %7
  %39 = load i32, i32* %8
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds i32, i32* %38, i64 %40
  store i32 %37, i32* %41
  br label %42
42:
  %43 = load i32, i32* %8
  %44 = add nsw i32 %43, 1
  store i32 %44, i32* %8
  br label %24
45:
  %46 = load i32*, i32** %7
  %47 = load i32, i32* %6
  call void @ShellSort(i32* %46, i32 %47)
  store i32 0, i32* %9
  br label %49
49:
  %50 = load i32, i32* %9
  %51 = load i32, i32* %6
  %52 = icmp slt i32 %50, %51
  br i1 %52, label %55, label %53
53:
  br label %71
55:
  %56 = load i32*, i32** %7
  %57 = load i32, i32* %9
  %58 = sext i32 %57 to i64
  %59 = getelementptr inbounds i32, i32* %56, i64 %58
  %60 = load i32, i32* %59
  %61 = load i32, i32* %9
  %62 = load i32, i32* %6
  %63 = sub nsw i32 %62, 1
  %64 = icmp eq i32 %61, %63
  %65 = zext i1 %64 to i64
  %66 = select i1 %64, i32 10, i32 32
  %67 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str, i64 0, i64 0), i32 %60, i32 %66)
  br label %68
68:
  %69 = load i32, i32* %9
  %70 = add nsw i32 %69, 1
  store i32 %70, i32* %9
  br label %49
71:
  %72 = load i32*, i32** %7
  call void @free(i8* %73)
  store i32 0, i32* %3
  br label %76
76:
  %77 = load i32, i32* %3
  ret i32 %77
}
declare noalias i8* @malloc(i64)
define available_externally i32 @atoi(i8* nonnull %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  %4 = call i64 @strtol(i8* %3, i8** null, i32 10)
  %5 = trunc i64 %4 to i32
  ret i32 %5
}
declare i32 @printf(i8*, ...)
declare void @free(i8*)
declare i64 @strtol(i8*, i8**, i32)
