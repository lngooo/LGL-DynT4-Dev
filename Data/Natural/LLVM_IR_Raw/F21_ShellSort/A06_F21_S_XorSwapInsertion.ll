@.str = constant [5 x i8] c"%d%c\00"
define dso_local void @ShellSort(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  %10 = load i32, i32* %4
  %11 = sdiv i32 %10, 2
  store i32 %11, i32* %5
  br label %12
12:
  %13 = load i32, i32* %5
  %14 = icmp sgt i32 %13, 0
  br i1 %14, label %17, label %15
15:
  store i32 2, i32* %6
  br label %103
17:
  %19 = load i32, i32* %5
  store i32 %19, i32* %7
  br label %20
20:
  %21 = load i32, i32* %7
  %22 = load i32, i32* %4
  %23 = icmp slt i32 %21, %22
  br i1 %23, label %26, label %24
24:
  store i32 5, i32* %6
  br label %99
26:
  %28 = load i32, i32* %7
  store i32 %28, i32* %8
  br label %29
29:
  %30 = load i32, i32* %8
  %31 = load i32, i32* %5
  %32 = icmp sge i32 %30, %31
  br i1 %32, label %33, label %47
33:
  %34 = load i32*, i32** %3
  %35 = load i32, i32* %8
  %36 = load i32, i32* %5
  %37 = sub nsw i32 %35, %36
  %38 = sext i32 %37 to i64
  %39 = getelementptr inbounds i32, i32* %34, i64 %38
  %40 = load i32, i32* %39
  %41 = load i32*, i32** %3
  %42 = load i32, i32* %8
  %43 = sext i32 %42 to i64
  %44 = getelementptr inbounds i32, i32* %41, i64 %43
  %45 = load i32, i32* %44
  %46 = icmp sgt i32 %40, %45
  br label %47
47:
  %48 = phi i1 [ false, %29 ], [ %46, %33 ]
  br i1 %48, label %51, label %49
49:
  store i32 8, i32* %6
  br label %95
51:
  %52 = load i32*, i32** %3
  %53 = load i32, i32* %8
  %54 = load i32, i32* %5
  %55 = sub nsw i32 %53, %54
  %56 = sext i32 %55 to i64
  %57 = getelementptr inbounds i32, i32* %52, i64 %56
  %58 = load i32, i32* %57
  %59 = load i32*, i32** %3
  %60 = load i32, i32* %8
  %61 = sext i32 %60 to i64
  %62 = getelementptr inbounds i32, i32* %59, i64 %61
  %63 = load i32, i32* %62
  %64 = xor i32 %63, %58
  store i32 %64, i32* %62
  %65 = load i32*, i32** %3
  %66 = load i32, i32* %8
  %67 = sext i32 %66 to i64
  %68 = getelementptr inbounds i32, i32* %65, i64 %67
  %69 = load i32, i32* %68
  %70 = load i32*, i32** %3
  %71 = load i32, i32* %8
  %72 = load i32, i32* %5
  %73 = sub nsw i32 %71, %72
  %74 = sext i32 %73 to i64
  %75 = getelementptr inbounds i32, i32* %70, i64 %74
  %76 = load i32, i32* %75
  %77 = xor i32 %76, %69
  store i32 %77, i32* %75
  %78 = load i32*, i32** %3
  %79 = load i32, i32* %8
  %80 = load i32, i32* %5
  %81 = sub nsw i32 %79, %80
  %82 = sext i32 %81 to i64
  %83 = getelementptr inbounds i32, i32* %78, i64 %82
  %84 = load i32, i32* %83
  %85 = load i32*, i32** %3
  %86 = load i32, i32* %8
  %87 = sext i32 %86 to i64
  %88 = getelementptr inbounds i32, i32* %85, i64 %87
  %89 = load i32, i32* %88
  %90 = xor i32 %89, %84
  store i32 %90, i32* %88
  br label %91
91:
  %92 = load i32, i32* %5
  %93 = load i32, i32* %8
  %94 = sub nsw i32 %93, %92
  store i32 %94, i32* %8
  br label %29
95:
  br label %96
96:
  %97 = load i32, i32* %7
  %98 = add nsw i32 %97, 1
  store i32 %98, i32* %7
  br label %20
99:
  br label %100
100:
  %101 = load i32, i32* %5
  %102 = sdiv i32 %101, 2
  store i32 %102, i32* %5
  br label %12
103:
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
