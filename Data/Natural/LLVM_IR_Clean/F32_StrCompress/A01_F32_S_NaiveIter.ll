@.str = constant [5 x i8] c"%c%d\00"
@.str.1 = constant [2 x i8] c"\0A\00"
define dso_local void @StrCompress(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i8* %0, i8** %2
  %8 = load i8*, i8** %2
  %9 = call i64 @strlen(i8* %8)
  %10 = trunc i64 %9 to i32
  store i32 %10, i32* %3
  %11 = load i32, i32* %3
  %12 = icmp eq i32 %11, 0
  br i1 %12, label %13, label %14
13:
  store i32 1, i32* %4
  br label %66
14:
  store i32 0, i32* %5
  br label %16
16:
  %17 = load i32, i32* %5
  %18 = load i32, i32* %3
  %19 = icmp slt i32 %17, %18
  br i1 %19, label %22, label %20
20:
  store i32 2, i32* %4
  br label %64
22:
  store i32 1, i32* %6
  br label %24
24:
  %25 = load i32, i32* %5
  %26 = add nsw i32 %25, 1
  %27 = load i32, i32* %3
  %28 = icmp slt i32 %26, %27
  br i1 %28, label %29, label %44
29:
  %30 = load i8*, i8** %2
  %31 = load i32, i32* %5
  %32 = sext i32 %31 to i64
  %33 = getelementptr inbounds i8, i8* %30, i64 %32
  %34 = load i8, i8* %33
  %35 = sext i8 %34 to i32
  %36 = load i8*, i8** %2
  %37 = load i32, i32* %5
  %38 = add nsw i32 %37, 1
  %39 = sext i32 %38 to i64
  %40 = getelementptr inbounds i8, i8* %36, i64 %39
  %41 = load i8, i8* %40
  %42 = sext i8 %41 to i32
  %43 = icmp eq i32 %35, %42
  br label %44
44:
  %45 = phi i1 [ false, %24 ], [ %43, %29 ]
  br i1 %45, label %46, label %51
46:
  %47 = load i32, i32* %6
  %48 = add nsw i32 %47, 1
  store i32 %48, i32* %6
  %49 = load i32, i32* %5
  %50 = add nsw i32 %49, 1
  store i32 %50, i32* %5
  br label %24
51:
  %52 = load i8*, i8** %2
  %53 = load i32, i32* %5
  %54 = sext i32 %53 to i64
  %55 = getelementptr inbounds i8, i8* %52, i64 %54
  %56 = load i8, i8* %55
  %57 = sext i8 %56 to i32
  %58 = load i32, i32* %6
  %59 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str, i64 0, i64 0), i32 %57, i32 %58)
  br label %61
61:
  %62 = load i32, i32* %5
  %63 = add nsw i32 %62, 1
  store i32 %63, i32* %5
  br label %16
64:
  %65 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.1, i64 0, i64 0))
  store i32 0, i32* %4
  br label %66
66:
  %68 = load i32, i32* %4
  switch i32 %68, label %70 [
    i32 0, label %69
    i32 1, label %69
  ]
69:
  ret void
70:
  unreachable
}
declare i64 @strlen(i8*)
declare i32 @printf(i8*, ...)
