@.str = constant [4 x i8] c"%s\0A\00"
define dso_local void @vrZ(i8* %0, i32 %1) {
  %3 = alloca i8*
  %4 = alloca i32
  %5 = alloca i8*
  %6 = alloca i32
  store i8* %0, i8** %3
  store i32 %1, i32* %4
  %8 = load i8*, i8** %3
  store i8* %8, i8** %5
  %10 = load i32, i32* %4
  %11 = srem i32 %10, 26
  %12 = add nsw i32 %11, 26
  %13 = srem i32 %12, 26
  store i32 %13, i32* %6
  br label %14
14:
  br label %15
15:
  %16 = load i8*, i8** %5
  %17 = load i8, i8* %16
  %18 = sext i8 %17 to i32
  %19 = icmp eq i32 %18, 0
  br i1 %19, label %20, label %21
20:
  br label %67
21:
  %22 = load i8*, i8** %5
  %23 = load i8, i8* %22
  %24 = sext i8 %23 to i32
  %25 = icmp sge i32 %24, 65
  br i1 %25, label %26, label %42
26:
  %27 = load i8*, i8** %5
  %28 = load i8, i8* %27
  %29 = sext i8 %28 to i32
  %30 = icmp sle i32 %29, 90
  br i1 %30, label %31, label %42
31:
  %32 = load i8*, i8** %5
  %33 = load i8, i8* %32
  %34 = sext i8 %33 to i32
  %35 = sub nsw i32 %34, 65
  %36 = load i32, i32* %6
  %37 = add nsw i32 %35, %36
  %38 = srem i32 %37, 26
  %39 = add nsw i32 %38, 65
  %40 = trunc i32 %39 to i8
  %41 = load i8*, i8** %5
  store i8 %40, i8* %41
  br label %64
42:
  %43 = load i8*, i8** %5
  %44 = load i8, i8* %43
  %45 = sext i8 %44 to i32
  %46 = icmp sge i32 %45, 97
  br i1 %46, label %47, label %63
47:
  %48 = load i8*, i8** %5
  %49 = load i8, i8* %48
  %50 = sext i8 %49 to i32
  %51 = icmp sle i32 %50, 122
  br i1 %51, label %52, label %63
52:
  %53 = load i8*, i8** %5
  %54 = load i8, i8* %53
  %55 = sext i8 %54 to i32
  %56 = sub nsw i32 %55, 97
  %57 = load i32, i32* %6
  %58 = add nsw i32 %56, %57
  %59 = srem i32 %58, 26
  %60 = add nsw i32 %59, 97
  %61 = trunc i32 %60 to i8
  %62 = load i8*, i8** %5
  store i8 %61, i8* %62
  br label %63
63:
  br label %64
64:
  %65 = load i8*, i8** %5
  %66 = getelementptr inbounds i8, i8* %65, i32 1
  store i8* %66, i8** %5
  br label %14
67:
  ret void
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i32
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %7 = load i32, i32* %4
  %8 = icmp slt i32 %7, 3
  br i1 %8, label %9, label %10
9:
  store i32 1, i32* %3
  br label %25
10:
  %12 = load i8**, i8*** %5
  %13 = getelementptr inbounds i8*, i8** %12, i64 2
  %14 = load i8*, i8** %13
  %15 = call i32 @atoi(i8* %14)
  store i32 %15, i32* %6
  %16 = load i8**, i8*** %5
  %17 = getelementptr inbounds i8*, i8** %16, i64 1
  %18 = load i8*, i8** %17
  %19 = load i32, i32* %6
  call void @vrZ(i8* %18, i32 %19)
  %20 = load i8**, i8*** %5
  %21 = getelementptr inbounds i8*, i8** %20, i64 1
  %22 = load i8*, i8** %21
  %23 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i8* %22)
  store i32 0, i32* %3
  br label %25
25:
  %26 = load i32, i32* %3
  ret i32 %26
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
