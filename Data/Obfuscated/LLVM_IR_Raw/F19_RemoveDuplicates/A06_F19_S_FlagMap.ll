@.str = constant [5 x i8] c"%d%s\00"
@.str.1 = constant [1 x i8] zeroinitializer
@.str.2 = constant [2 x i8] c" \00"
@.str.3 = constant [2 x i8] c"\0A\00"
define dso_local i32 @k6(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca [128 x i32]
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  call void @llvm.memset.p0i8.i64(i8* align 16 %12, i8 0, i64 512, i1 false)
  store i32 0, i32* %6
  store i32 0, i32* %7
  br label %15
15:
  %16 = load i32, i32* %7
  %17 = load i32, i32* %4
  %18 = icmp slt i32 %16, %17
  br i1 %18, label %21, label %19
19:
  store i32 2, i32* %8
  br label %62
21:
  %22 = load i32, i32* %7
  %23 = sext i32 %22 to i64
  %24 = getelementptr inbounds [128 x i32], [128 x i32]* %5, i64 0, i64 %23
  %25 = load i32, i32* %24
  %26 = icmp ne i32 %25, 0
  br i1 %26, label %27, label %28
27:
  br label %59
28:
  %30 = load i32, i32* %7
  %31 = add nsw i32 %30, 1
  store i32 %31, i32* %9
  br label %32
32:
  %33 = load i32, i32* %9
  %34 = load i32, i32* %4
  %35 = icmp slt i32 %33, %34
  br i1 %35, label %38, label %36
36:
  store i32 5, i32* %8
  br label %58
38:
  %39 = load i32*, i32** %3
  %40 = load i32, i32* %7
  %41 = sext i32 %40 to i64
  %42 = getelementptr inbounds i32, i32* %39, i64 %41
  %43 = load i32, i32* %42
  %44 = load i32*, i32** %3
  %45 = load i32, i32* %9
  %46 = sext i32 %45 to i64
  %47 = getelementptr inbounds i32, i32* %44, i64 %46
  %48 = load i32, i32* %47
  %49 = icmp eq i32 %43, %48
  br i1 %49, label %50, label %54
50:
  %51 = load i32, i32* %9
  %52 = sext i32 %51 to i64
  %53 = getelementptr inbounds [128 x i32], [128 x i32]* %5, i64 0, i64 %52
  store i32 1, i32* %53
  br label %54
54:
  br label %55
55:
  %56 = load i32, i32* %9
  %57 = add nsw i32 %56, 1
  store i32 %57, i32* %9
  br label %32
58:
  br label %59
59:
  %60 = load i32, i32* %7
  %61 = add nsw i32 %60, 1
  store i32 %61, i32* %7
  br label %15
62:
  store i32 0, i32* %10
  br label %64
64:
  %65 = load i32, i32* %10
  %66 = load i32, i32* %4
  %67 = icmp slt i32 %65, %66
  br i1 %67, label %70, label %68
68:
  store i32 8, i32* %8
  br label %91
70:
  %71 = load i32, i32* %10
  %72 = sext i32 %71 to i64
  %73 = getelementptr inbounds [128 x i32], [128 x i32]* %5, i64 0, i64 %72
  %74 = load i32, i32* %73
  %75 = icmp ne i32 %74, 0
  br i1 %75, label %87, label %76
76:
  %77 = load i32*, i32** %3
  %78 = load i32, i32* %10
  %79 = sext i32 %78 to i64
  %80 = getelementptr inbounds i32, i32* %77, i64 %79
  %81 = load i32, i32* %80
  %82 = load i32*, i32** %3
  %83 = load i32, i32* %6
  %84 = add nsw i32 %83, 1
  store i32 %84, i32* %6
  %85 = sext i32 %83 to i64
  %86 = getelementptr inbounds i32, i32* %82, i64 %85
  store i32 %81, i32* %86
  br label %87
87:
  br label %88
88:
  %89 = load i32, i32* %10
  %90 = add nsw i32 %89, 1
  store i32 %90, i32* %10
  br label %64
91:
  %92 = load i32, i32* %6
  store i32 1, i32* %8
  ret i32 %92
}
declare void @llvm.memset.p0i8.i64(i8* nocapture writeonly, i8, i64, i1 immarg)
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i32
  %7 = alloca [128 x i32]
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %11 = load i32, i32* %4
  %12 = icmp slt i32 %11, 2
  br i1 %12, label %13, label %14
13:
  store i32 0, i32* %3
  br label %72
14:
  %16 = load i32, i32* %4
  %17 = sub nsw i32 %16, 1
  store i32 %17, i32* %6
  store i32 0, i32* %8
  br label %20
20:
  %21 = load i32, i32* %8
  %22 = load i32, i32* %6
  %23 = icmp slt i32 %21, %22
  br i1 %23, label %26, label %24
24:
  br label %40
26:
  %27 = load i8**, i8*** %5
  %28 = load i32, i32* %8
  %29 = add nsw i32 %28, 1
  %30 = sext i32 %29 to i64
  %31 = getelementptr inbounds i8*, i8** %27, i64 %30
  %32 = load i8*, i8** %31
  %33 = call i32 @atoi(i8* %32)
  %34 = load i32, i32* %8
  %35 = sext i32 %34 to i64
  %36 = getelementptr inbounds [128 x i32], [128 x i32]* %7, i64 0, i64 %35
  store i32 %33, i32* %36
  br label %37
37:
  %38 = load i32, i32* %8
  %39 = add nsw i32 %38, 1
  store i32 %39, i32* %8
  br label %20
40:
  %42 = getelementptr inbounds [128 x i32], [128 x i32]* %7, i64 0, i64 0
  %43 = load i32, i32* %6
  %44 = call i32 @k6(i32* %42, i32 %43)
  store i32 %44, i32* %9
  store i32 0, i32* %10
  br label %46
46:
  %47 = load i32, i32* %10
  %48 = load i32, i32* %9
  %49 = icmp slt i32 %47, %48
  br i1 %49, label %52, label %50
50:
  br label %67
52:
  %53 = load i32, i32* %10
  %54 = sext i32 %53 to i64
  %55 = getelementptr inbounds [128 x i32], [128 x i32]* %7, i64 0, i64 %54
  %56 = load i32, i32* %55
  %57 = load i32, i32* %10
  %58 = load i32, i32* %9
  %59 = sub nsw i32 %58, 1
  %60 = icmp eq i32 %57, %59
  %61 = zext i1 %60 to i64
  %62 = select i1 %60, i8* getelementptr inbounds ([1 x i8], [1 x i8]* @.str.1, i64 0, i64 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.2, i64 0, i64 0)
  %63 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str, i64 0, i64 0), i32 %56, i8* %62)
  br label %64
64:
  %65 = load i32, i32* %10
  %66 = add nsw i32 %65, 1
  store i32 %66, i32* %10
  br label %46
67:
  %68 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.3, i64 0, i64 0))
  store i32 0, i32* %3
  br label %72
72:
  %73 = load i32, i32* %3
  ret i32 %73
}
define available_externally i32 @atoi(i8* nonnull %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  %4 = call i64 @strtol(i8* %3, i8** null, i32 10)
  %5 = trunc i64 %4 to i32
  ret i32 %5
}
declare i32 @printf(i8*, ...)
declare i64 @strtol(i8*, i8**, i32)
