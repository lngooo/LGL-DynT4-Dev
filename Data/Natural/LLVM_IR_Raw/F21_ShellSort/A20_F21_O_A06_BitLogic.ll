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
  br label %118
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
  br label %114
26:
  %28 = load i32, i32* %7
  store i32 %28, i32* %8
  br label %29
29:
  %30 = load i32, i32* %8
  %31 = load i32, i32* %5
  %32 = icmp sge i32 %30, %31
  br i1 %32, label %34, label %33
33:
  store i32 8, i32* %6
  br label %108
34:
  %35 = load i32*, i32** %3
  %36 = load i32, i32* %8
  %37 = load i32, i32* %5
  %38 = sub nsw i32 %36, %37
  %39 = sext i32 %38 to i64
  %40 = getelementptr inbounds i32, i32* %35, i64 %39
  %41 = load i32, i32* %40
  %42 = load i32*, i32** %3
  %43 = load i32, i32* %8
  %44 = sext i32 %43 to i64
  %45 = getelementptr inbounds i32, i32* %42, i64 %44
  %46 = load i32, i32* %45
  %47 = icmp sgt i32 %41, %46
  br i1 %47, label %48, label %102
48:
  %49 = load i32*, i32** %3
  %50 = load i32, i32* %8
  %51 = sext i32 %50 to i64
  %52 = getelementptr inbounds i32, i32* %49, i64 %51
  %53 = load i32, i32* %52
  %54 = load i32*, i32** %3
  %55 = load i32, i32* %8
  %56 = load i32, i32* %5
  %57 = sub nsw i32 %55, %56
  %58 = sext i32 %57 to i64
  %59 = getelementptr inbounds i32, i32* %54, i64 %58
  %60 = load i32, i32* %59
  %61 = xor i32 %53, %60
  %62 = load i32*, i32** %3
  %63 = load i32, i32* %8
  %64 = sext i32 %63 to i64
  %65 = getelementptr inbounds i32, i32* %62, i64 %64
  store i32 %61, i32* %65
  %66 = load i32*, i32** %3
  %67 = load i32, i32* %8
  %68 = sext i32 %67 to i64
  %69 = getelementptr inbounds i32, i32* %66, i64 %68
  %70 = load i32, i32* %69
  %71 = load i32*, i32** %3
  %72 = load i32, i32* %8
  %73 = load i32, i32* %5
  %74 = sub nsw i32 %72, %73
  %75 = sext i32 %74 to i64
  %76 = getelementptr inbounds i32, i32* %71, i64 %75
  %77 = load i32, i32* %76
  %78 = xor i32 %70, %77
  %79 = load i32*, i32** %3
  %80 = load i32, i32* %8
  %81 = load i32, i32* %5
  %82 = sub nsw i32 %80, %81
  %83 = sext i32 %82 to i64
  %84 = getelementptr inbounds i32, i32* %79, i64 %83
  store i32 %78, i32* %84
  %85 = load i32*, i32** %3
  %86 = load i32, i32* %8
  %87 = sext i32 %86 to i64
  %88 = getelementptr inbounds i32, i32* %85, i64 %87
  %89 = load i32, i32* %88
  %90 = load i32*, i32** %3
  %91 = load i32, i32* %8
  %92 = load i32, i32* %5
  %93 = sub nsw i32 %91, %92
  %94 = sext i32 %93 to i64
  %95 = getelementptr inbounds i32, i32* %90, i64 %94
  %96 = load i32, i32* %95
  %97 = xor i32 %89, %96
  %98 = load i32*, i32** %3
  %99 = load i32, i32* %8
  %100 = sext i32 %99 to i64
  %101 = getelementptr inbounds i32, i32* %98, i64 %100
  store i32 %97, i32* %101
  br label %103
102:
  store i32 8, i32* %6
  br label %108
103:
  br label %104
104:
  %105 = load i32, i32* %5
  %106 = load i32, i32* %8
  %107 = sub nsw i32 %106, %105
  store i32 %107, i32* %8
  br label %29
108:
  br label %110
110:
  br label %111
111:
  %112 = load i32, i32* %7
  %113 = add nsw i32 %112, 1
  store i32 %113, i32* %7
  br label %20
114:
  br label %115
115:
  %116 = load i32, i32* %5
  %117 = sdiv i32 %116, 2
  store i32 %117, i32* %5
  br label %12
118:
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
