@.str = constant [5 x i8] c"%d%s\00"
@.str.1 = constant [1 x i8] zeroinitializer
@.str.2 = constant [2 x i8] c" \00"
@.str.3 = constant [2 x i8] c"\0A\00"
define dso_local i32 @RemoveDuplicates(i32* %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  %11 = load i32, i32* %5
  %12 = icmp sle i32 %11, 0
  br i1 %12, label %13, label %14
13:
  store i32 0, i32* %3
  br label %63
14:
  %16 = load i32*, i32** %4
  %17 = load i32, i32* %5
  %18 = sub nsw i32 %17, 1
  %19 = call i32 @RemoveDuplicates(i32* %16, i32 %18)
  store i32 %19, i32* %6
  %21 = load i32*, i32** %4
  %22 = load i32, i32* %5
  %23 = sub nsw i32 %22, 1
  %24 = sext i32 %23 to i64
  %25 = getelementptr inbounds i32, i32* %21, i64 %24
  %26 = load i32, i32* %25
  store i32 %26, i32* %7
  store i32 0, i32* %8
  store i32 0, i32* %9
  br label %29
29:
  %30 = load i32, i32* %9
  %31 = load i32, i32* %6
  %32 = icmp slt i32 %30, %31
  br i1 %32, label %33, label %45
33:
  %34 = load i32*, i32** %4
  %35 = load i32, i32* %9
  %36 = sext i32 %35 to i64
  %37 = getelementptr inbounds i32, i32* %34, i64 %36
  %38 = load i32, i32* %37
  %39 = load i32, i32* %7
  %40 = icmp eq i32 %38, %39
  br i1 %40, label %41, label %42
41:
  store i32 1, i32* %8
  br label %45
42:
  %43 = load i32, i32* %9
  %44 = add nsw i32 %43, 1
  store i32 %44, i32* %9
  br label %29
45:
  %46 = load i32, i32* %8
  %47 = icmp ne i32 %46, 0
  br i1 %47, label %56, label %48
48:
  %49 = load i32, i32* %7
  %50 = load i32*, i32** %4
  %51 = load i32, i32* %6
  %52 = sext i32 %51 to i64
  %53 = getelementptr inbounds i32, i32* %50, i64 %52
  store i32 %49, i32* %53
  %54 = load i32, i32* %6
  %55 = add nsw i32 %54, 1
  store i32 %55, i32* %3
  store i32 1, i32* %10
  br label %58
56:
  %57 = load i32, i32* %6
  store i32 %57, i32* %3
  store i32 1, i32* %10
  br label %58
58:
  br label %63
63:
  %64 = load i32, i32* %3
  ret i32 %64
}
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
  %44 = call i32 @RemoveDuplicates(i32* %42, i32 %43)
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
