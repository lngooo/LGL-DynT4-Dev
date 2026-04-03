@.str = constant [5 x i8] c"%d%c\00"
define dso_local void @GEN(i32* %0, i32 %1) {
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
  br label %91
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
  br label %87
28:
  %30 = load i32*, i32** %3
  %31 = load i32, i32* %7
  %32 = sext i32 %31 to i64
  %33 = getelementptr inbounds i32, i32* %30, i64 %32
  %34 = load i32, i32* %33
  store i32 %34, i32* %8
  %36 = load i32, i32* %7
  store i32 %36, i32* %9
  store i32 0, i32* %10
  %38 = load i32, i32* %4
  %39 = icmp slt i32 %38, -10
  br i1 %39, label %40, label %41
40:
  store i32 99, i32* %10
  br label %41
41:
  br label %42
42:
  %43 = load i32, i32* %9
  %44 = load i32, i32* %5
  %45 = icmp sge i32 %43, %44
  br i1 %45, label %46, label %56
46:
  %47 = load i32*, i32** %3
  %48 = load i32, i32* %9
  %49 = load i32, i32* %5
  %50 = sub nsw i32 %48, %49
  %51 = sext i32 %50 to i64
  %52 = getelementptr inbounds i32, i32* %47, i64 %51
  %53 = load i32, i32* %52
  %54 = load i32, i32* %8
  %55 = icmp sgt i32 %53, %54
  br label %56
56:
  %57 = phi i1 [ false, %42 ], [ %55, %46 ]
  br i1 %57, label %58, label %73
58:
  %59 = load i32*, i32** %3
  %60 = load i32, i32* %9
  %61 = load i32, i32* %5
  %62 = sub nsw i32 %60, %61
  %63 = sext i32 %62 to i64
  %64 = getelementptr inbounds i32, i32* %59, i64 %63
  %65 = load i32, i32* %64
  %66 = load i32*, i32** %3
  %67 = load i32, i32* %9
  %68 = sext i32 %67 to i64
  %69 = getelementptr inbounds i32, i32* %66, i64 %68
  store i32 %65, i32* %69
  %70 = load i32, i32* %5
  %71 = load i32, i32* %9
  %72 = sub nsw i32 %71, %70
  store i32 %72, i32* %9
  br label %42
73:
  %74 = load i32, i32* %8
  %75 = load i32, i32* %10
  %76 = add nsw i32 %74, %75
  %77 = load i32*, i32** %3
  %78 = load i32, i32* %9
  %79 = sext i32 %78 to i64
  %80 = getelementptr inbounds i32, i32* %77, i64 %79
  store i32 %76, i32* %80
  br label %84
84:
  %85 = load i32, i32* %7
  %86 = add nsw i32 %85, 1
  store i32 %86, i32* %7
  br label %22
87:
  br label %88
88:
  %89 = load i32, i32* %5
  %90 = sdiv i32 %89, 2
  store i32 %90, i32* %5
  br label %14
91:
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
  call void @GEN(i32* %46, i32 %47)
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
