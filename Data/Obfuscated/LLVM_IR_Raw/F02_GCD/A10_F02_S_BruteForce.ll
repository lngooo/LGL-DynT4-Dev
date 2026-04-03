@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @RDQ0(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  store i32 %0, i32* %4
  store i32 %1, i32* %5
  %9 = load i32, i32* %4
  %10 = call i32 @abs(i32 %9)
  store i32 %10, i32* %4
  %11 = load i32, i32* %5
  %12 = call i32 @abs(i32 %11)
  store i32 %12, i32* %5
  %13 = load i32, i32* %4
  %14 = icmp eq i32 %13, 0
  br i1 %14, label %18, label %15
15:
  %16 = load i32, i32* %5
  %17 = icmp eq i32 %16, 0
  br i1 %17, label %18, label %22
18:
  %19 = load i32, i32* %4
  %20 = load i32, i32* %5
  %21 = or i32 %19, %20
  store i32 %21, i32* %3
  br label %61
22:
  %24 = load i32, i32* %4
  %25 = load i32, i32* %5
  %26 = icmp slt i32 %24, %25
  br i1 %26, label %27, label %29
27:
  %28 = load i32, i32* %4
  br label %31
29:
  %30 = load i32, i32* %5
  br label %31
31:
  %32 = phi i32 [ %28, %27 ], [ %30, %29 ]
  store i32 %32, i32* %6
  %34 = load i32, i32* %6
  store i32 %34, i32* %7
  br label %35
35:
  %36 = load i32, i32* %7
  %37 = icmp sge i32 %36, 1
  br i1 %37, label %39, label %38
38:
  store i32 2, i32* %8
  br label %55
39:
  %40 = load i32, i32* %4
  %41 = load i32, i32* %7
  %42 = srem i32 %40, %41
  %43 = icmp eq i32 %42, 0
  br i1 %43, label %44, label %51
44:
  %45 = load i32, i32* %5
  %46 = load i32, i32* %7
  %47 = srem i32 %45, %46
  %48 = icmp eq i32 %47, 0
  br i1 %48, label %49, label %51
49:
  %50 = load i32, i32* %7
  store i32 %50, i32* %3
  store i32 1, i32* %8
  br label %55
51:
  br label %52
52:
  %53 = load i32, i32* %7
  %54 = add nsw i32 %53, -1
  store i32 %54, i32* %7
  br label %35
55:
  %57 = load i32, i32* %8
  switch i32 %57, label %59 [
    i32 2, label %58
  ]
58:
  store i32 1, i32* %3
  store i32 1, i32* %8
  br label %59
59:
  br label %61
61:
  %62 = load i32, i32* %3
  ret i32 %62
}
declare i32 @abs(i32)
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %6 = load i32, i32* %4
  %7 = icmp slt i32 %6, 3
  br i1 %7, label %8, label %9
8:
  store i32 1, i32* %3
  br label %20
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  %13 = call i32 @atoi(i8* %12)
  %14 = load i8**, i8*** %5
  %15 = getelementptr inbounds i8*, i8** %14, i64 2
  %16 = load i8*, i8** %15
  %17 = call i32 @atoi(i8* %16)
  %18 = call i32 @RDQ0(i32 %13, i32 %17)
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %18)
  store i32 0, i32* %3
  br label %20
20:
  %21 = load i32, i32* %3
  ret i32 %21
}
declare i32 @printf(i8*, ...)
define available_externally i32 @atoi(i8* nonnull %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  %4 = call i64 @strtol(i8* %3, i8** null, i32 10)
  %5 = trunc i64 %4 to i32
  ret i32 %5
}
declare i64 @strtol(i8*, i8**, i32)
