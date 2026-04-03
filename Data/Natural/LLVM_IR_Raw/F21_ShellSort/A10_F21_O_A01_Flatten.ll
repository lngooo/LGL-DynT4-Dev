@.str = constant [5 x i8] c"%d%c\00"
define dso_local void @ShellSort(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 0, i32* %5
  br label %15
15:
  %16 = load i32, i32* %5
  %17 = icmp ne i32 %16, 4
  br i1 %17, label %18, label %86
18:
  %19 = load i32, i32* %5
  switch i32 %19, label %85 [
    i32 0, label %20
    i32 1, label %23
    i32 2, label %30
    i32 3, label %45
  ]
20:
  %21 = load i32, i32* %4
  %22 = sdiv i32 %21, 2
  store i32 %22, i32* %6
  store i32 1, i32* %5
  br label %85
23:
  %24 = load i32, i32* %6
  %25 = icmp sgt i32 %24, 0
  br i1 %25, label %26, label %28
26:
  %27 = load i32, i32* %6
  store i32 %27, i32* %7
  store i32 2, i32* %5
  br label %29
28:
  store i32 4, i32* %5
  br label %29
29:
  br label %85
30:
  %31 = load i32, i32* %7
  %32 = load i32, i32* %4
  %33 = icmp slt i32 %31, %32
  br i1 %33, label %34, label %41
34:
  %35 = load i32*, i32** %3
  %36 = load i32, i32* %7
  %37 = sext i32 %36 to i64
  %38 = getelementptr inbounds i32, i32* %35, i64 %37
  %39 = load i32, i32* %38
  store i32 %39, i32* %9
  %40 = load i32, i32* %7
  store i32 %40, i32* %8
  store i32 3, i32* %5
  br label %44
41:
  %42 = load i32, i32* %6
  %43 = sdiv i32 %42, 2
  store i32 %43, i32* %6
  store i32 1, i32* %5
  br label %44
44:
  br label %85
45:
  br label %46
46:
  %47 = load i32, i32* %8
  %48 = load i32, i32* %6
  %49 = icmp sge i32 %47, %48
  br i1 %49, label %50, label %60
50:
  %51 = load i32*, i32** %3
  %52 = load i32, i32* %8
  %53 = load i32, i32* %6
  %54 = sub nsw i32 %52, %53
  %55 = sext i32 %54 to i64
  %56 = getelementptr inbounds i32, i32* %51, i64 %55
  %57 = load i32, i32* %56
  %58 = load i32, i32* %9
  %59 = icmp sgt i32 %57, %58
  br label %60
60:
  %61 = phi i1 [ false, %46 ], [ %59, %50 ]
  br i1 %61, label %62, label %77
62:
  %63 = load i32*, i32** %3
  %64 = load i32, i32* %8
  %65 = load i32, i32* %6
  %66 = sub nsw i32 %64, %65
  %67 = sext i32 %66 to i64
  %68 = getelementptr inbounds i32, i32* %63, i64 %67
  %69 = load i32, i32* %68
  %70 = load i32*, i32** %3
  %71 = load i32, i32* %8
  %72 = sext i32 %71 to i64
  %73 = getelementptr inbounds i32, i32* %70, i64 %72
  store i32 %69, i32* %73
  %74 = load i32, i32* %6
  %75 = load i32, i32* %8
  %76 = sub nsw i32 %75, %74
  store i32 %76, i32* %8
  br label %46
77:
  %78 = load i32, i32* %9
  %79 = load i32*, i32** %3
  %80 = load i32, i32* %8
  %81 = sext i32 %80 to i64
  %82 = getelementptr inbounds i32, i32* %79, i64 %81
  store i32 %78, i32* %82
  %83 = load i32, i32* %7
  %84 = add nsw i32 %83, 1
  store i32 %84, i32* %7
  store i32 2, i32* %5
  br label %85
85:
  br label %15
86:
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
